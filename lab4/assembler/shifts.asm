addi	$t0, $zero, 14 # E
addi	$t1, $zero, 7 # hex answers:

sw	$t0, 60($zero)
sw	$t1, 64($zero)

sll	$s0, $t0, 2 # 38
srl	$s1, $t0, 2 # 3
sra	$s2, $t0, 2 # 3


sw	$s0, 68($zero)
sw	$s1, 72($zero)
sw	$s2, 76($zero)