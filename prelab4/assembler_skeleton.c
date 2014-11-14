/* Assebmler code fragment */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000
#define MAX_LINE_NUMBER 1000 
#define MAX_FIELD_LENGTH 50

int Parse(char *, char [][MAX_FIELD_LENGTH], char [][MAX_FIELD_LENGTH], char [][MAX_FIELD_LENGTH], char [][MAX_FIELD_LENGTH], char [][MAX_FIELD_LENGTH], int *);

int isNumber(char *);

int main(int argc, char *argv[])
{

    char label[MAX_LINE_NUMBER][MAX_FIELD_LENGTH]; 
    char instr[MAX_LINE_NUMBER][MAX_FIELD_LENGTH]; 
    char par1[MAX_LINE_NUMBER][MAX_FIELD_LENGTH], par2[MAX_LINE_NUMBER][MAX_FIELD_LENGTH], par3[MAX_LINE_NUMBER][MAX_FIELD_LENGTH];

    char *inputFileName, *outputFileName;

    int instruction_count=0;
    int machCode[MAX_FIELD_LENGTH] = {0}; /* Array that stores the translated machine code. */

    if (argc != 3) {
        printf("Error: %s <assembly-code-file> <machine-code-file>\n", argv[0]);
        return 0;
    }

	
    inputFileName = argv[1];
    outputFileName = argv[2];
 

    /* Read Input File and Parsing the label, instruction, and parameters (fields).
     * This function also return an instruction count of the input File 
     */
    if (Parse(inputFileName, label, instr, par1, par2, par3, &instruction_count)) {
        printf("Parsing Error!!!\n");
        return 0;
    }


    /* TODO: Start your implementation here. */








    /* Write machine code to the output file. */
    FILE *outputFilePtr;
    outputFilePtr = fopen(outputFileName, "w");

    for (int i = 0; i < instruction_count; i++) {
        fprintf(outputFilePtr, "%.8x\n", machCode[i]);
    }

    fclose(outputFilePtr);

    return 0;
}


/*
 * Parse the assembly-language file.  
 * 
 * Return values:
 *     0 if successfully finish parsing the file
 *     1 if some error occurs
 * 
 */

int Parse(char *inputFileName, char label[][MAX_FIELD_LENGTH], char instr[][MAX_FIELD_LENGTH], char par1[][MAX_FIELD_LENGTH], char par2[][MAX_FIELD_LENGTH], char par3[][MAX_FIELD_LENGTH], int *instruction_count)
{
    char line[MAX_LINE_LENGTH];
    char *ptr;
    FILE *inputFilePtr;
    int i;


    *instruction_count = 0;

    inputFilePtr = fopen(inputFileName, "r");

    if(inputFilePtr == NULL) {

        printf("Error: cannot open file %s!!\n", inputFileName);
        return 1;
    }


    while(fgets(line, MAX_LINE_LENGTH, inputFilePtr) != NULL) {

        // initialize values.
        label[*instruction_count][0] = instr[*instruction_count][0] = '\0';
        par1[*instruction_count][0] = par2[*instruction_count][0] = par3[*instruction_count][0] = '\0';

        for(i=0; i<strlen(line); i++)
            if(line[i] == '\r')  
	        line[i] = '\n';

        ptr = line;

        if (sscanf(ptr, "%[^\t\n ]", label[*instruction_count])) {

            /* read label and advance pointer over the label */
            ptr += strlen(label[*instruction_count]);

        }


        sscanf(ptr, "%*[\t\n ]%[^\t\n ]%*[\t\n ]%[^\t\n ]%*[\t\n ]%[^\t\n ]%*[\t\n ]%[^\t\n ]", instr[*instruction_count], par1[*instruction_count], par2[*instruction_count], par3[*instruction_count]);	
		 
        *instruction_count = *instruction_count + 1;

        if( *instruction_count >= MAX_LINE_NUMBER) {

            printf("Error: the assembly code is more than %d lines !!", MAX_LINE_NUMBER);
            return 1;
        }

    }

    fclose(inputFilePtr);

    return 0;
   
}


int isNumber(char *string)
{
    /* return 0 if string is a number */
    int i;
    return !((sscanf(string, "%d", &i)) == 1);
}
