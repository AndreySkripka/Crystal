#include <stdint.h>


//fixme all files
struct used_memory
{
    uint64_t cs_addr;
    uint64_t addr;
    uint64_t size;
    struct used_memory * next_point;
};

struct  process_control
{
    struct process_control * last_point;
    uint64_t cs_addr;
    uint64_t proc_addr;
    struct process_control * next_point;
};

struct process_control * now_process;

struct used_memory * start_point;


