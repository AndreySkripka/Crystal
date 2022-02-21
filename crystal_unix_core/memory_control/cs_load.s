cs_load:
    movq %cs, %eax
    add  $1,  %eax
    movq %eax, %cs