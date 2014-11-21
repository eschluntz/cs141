        addi      $t1,    $zero, 1
        j         loop
        addi      $t1,    $t1, 1
        addi      $t1,    $t1, 1
loop:   sw        $t1,    36($zero)
        sw        $t1,    40($zero)
