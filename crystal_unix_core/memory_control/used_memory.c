#include "stdint.h"
#include "memory_struct.h"
#include "stdbool.h"

uint64_t * used_memory()
{
    uint64_t addr = now_process->proc_addr;
    bool i = TRUE;
    struct used_memory * next_point = start_point;
    
    while(i)
    {
        if(next_point->addr != addr)
            {
                next_point = next_point->next_point;
            }
        else
            return next_point->size;
    }
    return -1;
}

uint64_t * process_addr()
{
    return now_process->proc_addr;
}

uint64_t resized_used_memory(uint64_t size)
{
    uint64_t addr = now_process->proc_addr;
    bool i = TRUE;
    struct used_memory * point = start_point;
    
    while(i)
    {
        if(point->addr != addr)
        {
            point = point->next_point;
        }
        else
        {
            uint64_t r_a = addr + point->size;
            point->size += size;
            return r_a;
        }
    }
    return -1;
}

uint64_t r_addr()
{
    uint64_t addr = now_process->proc_addr;
    uint64_t *size = used_memory();
    addr += *size;
    addr++;
    return addr;
}