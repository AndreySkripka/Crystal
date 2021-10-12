#include "stdio.h"

    /*
     *прописаны функиции для работы консолью операционной системы
    */

   /*
    *функция вывода без обработки специальных символов строки
   */
int printf(char *str)
{
    char *string_video_memory = (char)0xb800;
    while(str != '\0')
    {
        *string_video_memory++ = *str++;
        *string_video_memory++ = 15;
    }
    return 0;
}

int printf(char *str,int * argv[])
{

    char *string_video_memory = (char)0xb800;
    while(str != '\0')
    {
        if(str != '%')
        {

        }
        else
        {
            
        }
    }
    return 0;
}


