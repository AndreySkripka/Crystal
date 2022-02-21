#include <stdint.h>
#include <memory_type.h>
#include "used_memory.h"

uint64_t new_memory(uint8_t type, uint64_t * size)
{
    switch (type)
    {
    case MT_TASK_NEW_MEMORY:
        uint64_t np = r_addr();
        uint64_t used_size = used_memory();
        resized_used_memory(*size);
        break;
    case MT_TASK:
        
        break;
    default:
        break;
    }
}