        addi $t1, $zero, 0
        jal loop
        j end
loop:   addi      $t1,    $t1, 4        # $s0 = $s1 + $s2
        jr $ra
end:    sw        $t1,    40($zero)
