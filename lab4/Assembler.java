import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;


public class Assembler {
	public static void main(String[] args) throws IOException {
		HashMap<String, Integer> insts = new HashMap<String, Integer>();
		BufferedReader br = new BufferedReader(new FileReader(
				new File("/Users/Lucy/Documents/workspace/CS141/src/dict.in")));
		String line = br.readLine();
		while (line != null) {
			String[] splits = line.split(" ");
			insts.put(splits[0],Integer.parseInt(splits[1],2));
			line = br.readLine();
		}
		
		HashMap<String, Integer> rinsts = new HashMap<String, Integer>();
		br = new BufferedReader(new FileReader(
				new File("/Users/Lucy/Documents/workspace/CS141/src/rdict.in")));
		line = br.readLine();
		while (line != null) {
			String[] splits = line.split(" ");
			rinsts.put(splits[0],Integer.parseInt(splits[1],2));
			line = br.readLine();
		}

		HashMap<String, Integer> regs = new HashMap<String, Integer>();
		br = new BufferedReader(new FileReader(
				new File("/Users/Lucy/Documents/workspace/CS141/src/regs.in")));
		line = br.readLine();
		while (line != null) {
			String[] splits = line.split(" ");
			regs.put(splits[0],Integer.parseInt(splits[1]));
			line = br.readLine();
		}

		HashMap<String, Integer> labels = new HashMap<String, Integer>();
		br = new BufferedReader(new InputStreamReader(
				System.in));
		int i = 0;
		String input = br.readLine();
		String withcomment = null;
		String command = null;
		
		while (input != null) {
			String[] temp1 = input.split(":");
			if (temp1.length == 2) {
				labels.put(temp1[0],(i));
				withcomment = temp1[1];
			} else {
				withcomment = temp1[0];
			}
			String[] temp2 = withcomment.replaceAll("\\s+"," ").split("#");
			command = temp2[0].trim();
//			System.out.println(command);
			String[] temp3 = command.split("\t| ");
//			System.out.println(temp3[0]);
			if (!temp3[0].equals("nop")) {
				int temp = insts.get(temp3[0].replace(" ","")) << 26;
				if (temp == 0) {
					temp += rinsts.get(temp3[0]);
					if (temp3.length == 2) {
						temp3[1] = temp3[1].replace(",","").trim();
						temp += regs.get(temp3[1]) << 21;						
					} else {
						Integer tempnum = regs.get(temp3[3]);
						if (tempnum != null){
							temp3[1] = temp3[1].replace(",","").trim();
							temp += regs.get(temp3[1]) << 11;
							temp3[2] = temp3[2].replace(",","").trim();
							temp += regs.get(temp3[2]) << 21;
							temp += tempnum << 16;
						} else if (labels.get(temp3[3]) != null){
							temp3[1] = temp3[1].replace(",","").trim();
							temp += regs.get(temp3[1]) << 11;
							temp3[2] = temp3[2].replace(",","").trim();
							temp += regs.get(temp3[2]) << 21;
							tempnum = labels.get(temp3[3]) << 6;
							temp += tempnum;
						} else  {
							temp3[1] = temp3[1].replace(",","").trim();
							temp += regs.get(temp3[1]) << 11;
							temp3[2] = temp3[2].replace(",","").trim();
							temp += regs.get(temp3[2]) << 16;
							temp += Integer.parseInt(temp3[3]) << 6;
						}
					}
				} else if (temp3.length == 4) {
					temp3[2] = temp3[2].replace(",","").trim();
					temp3[1] = temp3[1].replace(",","").trim();
					if (temp3[0].equals("beq") || temp3[0].equals("bne")) {
						temp += regs.get(temp3[2]) << 16;
						temp += regs.get(temp3[1]) << 21;
					} else {
						temp += regs.get(temp3[2]) << 21;
						temp += regs.get(temp3[1]) << 16;						
					}
					if (labels.get(temp3[3]) != null) {
						temp += labels.get(temp3[3])+(0xFFFF-i);
					} else {
						if(Integer.parseInt(temp3[3]) < 0) {
							temp += 0xFFFF+Integer.parseInt(temp3[3])+1;
						} else {
							temp += Integer.parseInt(temp3[3]);
						}
					}
				}
				else if (temp3.length == 3){
					temp3[1] = temp3[1].replace(",","");
					temp += regs.get(temp3[1]) << 16;
					String[] tempsplit = temp3[2].split("\\(");
					temp += regs.get(tempsplit[1].replace(")","")) << 21;
					if(Integer.parseInt(tempsplit[0]) < 0) {
						temp += 0xFFFF+Integer.parseInt(tempsplit[0])+1;
					} else {
						temp += Integer.parseInt(tempsplit[0]);
					}

				} else if (temp3.length == 2) {
					Integer tempnum = regs.get(temp3[1]);
					if (tempnum == null){
						temp += labels.get(temp3[1]) + 0x00100000;
					} else {
						temp += tempnum;
					}
				}
				System.out.println(String.format("%08X",temp));
			} 
			else {
				System.out.println(String.format("%08X",0));
			}
			
			
			i++;
			input = br.readLine();
		}
		
	}
}
