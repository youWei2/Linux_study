#include <stdlib.h>
#include <stdio.h>


char * my_strcpy(char *dst,const char *src)   
{
    if((dst==NULL)||(src==NULL)) //输入参数的判断
           return NULL; 
    char *ret = dst; //[1]
 
    while ((*dst++=*src++)!='\0'); //[2]
 
    return ret;//[3]
}

int main()
{
    char *src = "hello world!";
    char buf[30];
    char *dst = my_strcpy(buf, src);
    printf("%p, %p, ret = %s, buf = %s", dst, buf, dst, buf);
}