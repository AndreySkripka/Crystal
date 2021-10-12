#include "strings.h"
#include "stdlib.h"

char *to_lower(char *str)
{
    int size = 1;
    while (*str != '\0')
        size++;
    char * return_string = (char)malloc(size);
    int i = 0;
    while(*str != '\0')
    {
        if(*str >=65 && *str <= 90)
            *(return_string + i) = *str + 41;
        i++;
        *str++;
        
    }
    return &return_string;
}

char *to_upper(char *str)
{
    int size = 1;
    while (*str != '\0')
        size++;
    char * return_string = (char)malloc(size);
    int i = 0;
    while(*str != "\0")
    {
        if(*str >=97 && *str <= 122)
            *(return_string + i) = *str -41; 
        i++;
        str++;
    }
    return &return_string;
}

void strcmp(char * addr, char * str)
{
    while(*str != "\0")
    {
        *addr = *str;
        addr++;
        str++;
    }
}