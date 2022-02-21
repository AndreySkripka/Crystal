#include <stdint.h>

extern uint64_t *file_open(const char * file_name, uint8_t *file_open_mode);

extern uint8_t file_close(uint64_t *addr);

extern uint8_t file_write(const char * str, uint64_t *addr, uint32_t *size);

extern uint8_t file_write(const char *str, uint64_t *addr, uint32_t *size);