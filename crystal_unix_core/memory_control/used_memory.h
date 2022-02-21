#include "stdint.h"

extern uint64_t * used_memory();
extern uint64_t * process_addr();
extern void resized_used_memory(uint64_t size);
extern uint64_t r_addr();
extern void cs_load();