#include "hdd.h"

struct crystal_files
{
    char filename[256];
    char first_sector;
    char last_sector;
    unsigned int size;
};

struct crystal_directories
{
    char direcoryname[256];
    struct crystal_files * files;
    struct crystal_directories * directories;
};

