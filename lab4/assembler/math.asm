addi	$t0, $zero, 17
addi	$t1, $zero, 42
add	$s0, $t0, $t1
sub	$s1, $t1, $t0
or	$s2, $t0, $t1
and	$s3, $t0, $t1
xor	$s4, $t0, $t1

sw	$s0, 60($zero)
sw	$s1, 64($zero)
sw	$s2, 68($zero)
sw	$s3, 72($zero)
sw	$s4, 76($zero)