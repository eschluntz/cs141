addi	$t0, $zero, 17
addi	$t1, $zero, 42
add	$s0, $t0, $t1
sub	$s1, $t1, $t0
or	$s2, $t0, $t1
and	$s3, $t0, $t1
xor	$s4, $t0, $t1

sw	$s0, 40($zero)
sw	$s1, 44($zero)
sw	$s2, 48($zero)
sw	$s3, 52($zero)
sw	$s4, 56($zero)