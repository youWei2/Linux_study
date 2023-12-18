#include <stdio.h>

char *GetMemory(void) 
{ 
    char p[] = "hello world";
	// char* p = "hello world";  //char *p="hello world"可以，p是局部变量，但是*p不是常量区的数据。
	return p; 
} 
void Test(void) 
{ 
	char *str = NULL; 
	str = GetMemory(); 
	printf("%s",str); 
} 

int main()
{
    Test();
    return 0; 
}