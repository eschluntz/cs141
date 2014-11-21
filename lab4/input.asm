        addi      $t1,    $zero, 7
        andi       $t2,    $t1, 14
        ori      $t3,    $t1, 14
        xori      $t4,    $t1, 14
        slti      $t5,    $t1, 14
loop:   sw        $t1,    40($zero)
        sw        $t2,    44($zero)
        sw        $t3,    48($zero)
        sw        $t4,    52($zero)
        sw        $t5,    56($zero)
