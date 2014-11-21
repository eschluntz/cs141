addi	$t0, $zero, 14 # E
addi	$t1, $zero, 7 # hex answers:

and	$s0, $t0, $t1 # 6
or	$s1, $t0, $t1 # F
xor	$s2, $t0, $t1 # 9
nor	$s3, $t0, $t1 # ...FF0
add	$s4, $t0, $t1 # 15
sub	$s5, $t0, $t1 # 7
slt	$s6, $t0, $t1 # 0
slt	$s7, $t1, $t0 # 1

sw	$s0, 100($zero)
sw	$s1, 104($zero)
sw	$s2, 108($zero)
sw	$s3, 112($zero)
sw	$s4, 116($zero)
sw	$s5, 120($zero)
sw	$s6, 124($zero)
sw	$s7, 128($zero)

sll	$s0, $t0, 2 # 38
srl	$s1, $t0, 2 # 3
sra	$s2, $t0, 2 # 3


sw	$s1, 132($zero)
sw	$s2, 136($zero)
sw	$s3, 140($zero)