#include "unistd.h"

unsigned int process_list_size = 0;

struct process_tree
{
    char * process_name;
    int num_child_process;
    struct process_tree * process;
};

struct process_tree * process_list;


//fixme
void fork()
{
    struct process_tree * address;
    address->num_child_process = 0;
    process_list_size++;
    process = (struct process_tree)malloc(process_list_size * sizeof(process_list_size) * sizeof(process_tree));
}
//fixme
void exec(const char * prog_name, const char * param, int *status)
{

}
