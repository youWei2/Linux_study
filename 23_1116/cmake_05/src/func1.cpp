#include "func1.h"

int printf_func1(char* str)
{
    if(str == NULL)
    {
        std::cout<< "input error!\n"<< std::endl;
        return -1;
    }
    std::cout<<str<<std::endl;
    return 0;
}