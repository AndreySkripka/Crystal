.code64

.global keyboard_input

keyboard_input:
    in $0x60, %al
    retb