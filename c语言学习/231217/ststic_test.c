#include <stdio.h>

void IntToCharChange(int num,  char* pval)  //此实现，转换负数有问题
{ 
	char strval[100]; 
	int i , j; 
	int val0 = 0; 
	int val1 = 0; 
	val0 = num; 
	for(i=0; i<100; i++) 
	{ 
		val1 = val0 % 10; //取余
		val0 = val0 / 10; // 取整
		strval[i] = val1 + 48;  // 数字—字符
		if(val0 < 10) 
		{ 
			i++; 
			strval[i] = val0 + 48; 
			break; 
		} 
	} 
	for(j=0; j<=i; j++)  // 倒置
	pval[j] = strval[i-j]; 
	pval[j] = '\0'; 
}

void IntToCharChange1(int num, char* pval)
{
    //判断正负号 
    char negFlag=0;
    if(num<0)
    {
        negFlag=1;
    }
    
    //计算字符串长度 
    int len=0;
    int tmp_num=num;
    if(negFlag)
    { 
        tmp_num *= -1;
        len++;
    } 
    while(tmp_num>0)
    {
        len++;
        tmp_num /= 10;
    }  
    // cout << "len=" << len << endl;
    
    //转成字符串 
    tmp_num = num; 
    if(negFlag)
    { 
        tmp_num *= -1;
        pval[0] = '-';
    } 
    
    int val;
    int i=0;
    while(tmp_num>0)
    {
        val = tmp_num%10;
        pval[len-i-1]= val+'0';
        tmp_num=tmp_num/10; 
        i++;
    }
    pval[len] = '\0';
} 
 
int main(int argc, char *argv[])
{
    if(1)
    {
        int num1 = 1234;
        char *str1;
        IntToCharChange1(num1, str1);
        cout << str1 << endl;
        
        int num2 = -1234;
        char *str2;
        IntToCharChange1(num2, str2);
        cout << str2 << endl;
    }
    return 0;
}
