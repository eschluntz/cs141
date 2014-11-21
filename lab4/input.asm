        addi      $t1,    $zero, 1
loop:   addi      $t1,    $t1, -1
        beq       $t1,    $zero, loop
        sw        $t1,    36($zero)
        sw        $t1,    40($zero)
