as bootloader/boot_sec.s -o boot_sec.o
ld boot_sec.o -e main -Ttext 0x7c00 --oformat=binary -o boot_sec.bin
qemu-system-x86_64 boot_sec.bin
rm boot_sec.o
