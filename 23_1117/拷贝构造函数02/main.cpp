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
		cout << "A有参构造函数调用！" << endl;
		x = a;
		y = new int(b);//在堆区申请int类型变量，用y接收
	}
	A(const A& a)
	{
		cout << "A拷贝构造函数调用" << endl;
		x = a.x;
		//y = a.y;编译器默认构造函数实现就是这行代码
		//深拷贝操作
		y = new int(*a.y);
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