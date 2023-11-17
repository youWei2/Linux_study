#include <iostream>
using namespace std;
 
class A
{
private:
	int x;
	int* y;
public:
	A(int a,int b)
	{
		cout << "A有参构造函数调 用！" << endl;
		x = a;
		y = new int(b);//在堆区申请int类型变量，用y接收
	}
	~A()
	{
		//析构代码，将堆区开辟的数据做释放操作
		if (y != NULL)
		{
			delete y;
			y = NULL;
		}
		cout << "A类析构函数调用" << endl;
	}
};
int main()
{
	A a1(2, 3);
	A a2(a1);
	return 0;
}