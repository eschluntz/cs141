        addi      $t1,    $zero, 0
        j         loop
        addi      $t1,    $t1, 10
loop:   addi      $t1,    $t1, 4        # $s0 = $s1 + $s2
        sw        $t1,    36($zero)
        sw        $t1,    40($zero)
