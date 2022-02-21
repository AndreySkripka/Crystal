#include <stdint.h>

struct fs_struct
{
    uint8_t *name;
    uint64_t sec;
    uint64_t line;
    uint64_t disk;
    uint64_t num_disk;
};


