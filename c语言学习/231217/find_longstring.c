int ChildString(char*p)     // 自己写
{   
    char *q =p;
    int stringlen=0, i=0,j=1,len=0,maxlen=1;   
    while(*q!='/0')          //不能用strlen, 求得长度stringlen
    {
        stringlen++;
        q++;
    }
    while( i<stringlen )    
    {   
        if(*(p+i)==*(p+j)& & j<stringlen)   
        {   
            len++;                    // 统计子串长度
            i++;
            j++;   
        }   
        else   
        {   
            if(len>maxlen)           // 统计最大子串长度
            {   
                maxlen=len+1;   
                len=0;
            }  
            else
                len=0;
            i++;
            j++;
        }   
    }  
    return  maxlen;    
}

int ChildString(char*p)   // 自己写
{ 
	char *q = p;
	int strlen = 0; 
	while(*q != '\0')     //不能用strlen, 求得长度stringlen
	{
		strlen++;
		q++;
	}
	
	int i, sublen=1, maxlen=0; 
	for(i=0; i<strlen; i++)  
	{ 
		if(*(p+i)==*(p+i+1) && (i+1<strlen)) 
		{ 
			sublen++;   // 统计子串长度
		} 
		else 
		{ 
			if(sublen > maxlen)      // 统计最大子串长度
			{ 
				maxlen = sublen;   
			}            
			sublen = 1;
		} 
	} 
	return maxlen;  
}
int main(int argc, char *argv[])
{
    if(1)
    {
        char *str = "hellllo";
        int len = ChildString(str);
        cout << len << endl;
    }
    return 0;
}
