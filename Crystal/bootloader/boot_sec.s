.code64
.global main
#include <crystal/kernel.h>
main:
    

.org 510
boot_sector_magick:
    .word 0xaa55