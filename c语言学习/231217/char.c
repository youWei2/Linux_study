#include <stdio.h>
 #include <stdlib.h>

void wap( int* p1,int* p2 )
{
	int *p;  //(int)malloc(4); is ok
	*p = *p1;
	*p1 = *p2;
	*p2 = *p;
}

int main()
{
    int *p1, *p2;
    p1 = (int *)malloc(4);
    p2 = (int *)malloc(4);
    *p1 = 1;
    *p2 = 2;
    wap(p1,p2);
    printf("p1=%d, p2=%d", *p1,*p2);
    free(p1);
    free(p2);
    return 0;
}