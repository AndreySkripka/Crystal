port_output:
    pop %eax
    pop %edx
    out %edx, %eax
    xor %eax, %eax
    retl

port_output:
    pop %ebx
    out %ebx, %edx
    movl %edx, %eax
    retl