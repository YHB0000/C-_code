#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		m_x = 0;
		m_y = 1;
	}
	Test(int x,int y)
	{
		m_x = x;
		m_y = y;
	}
	// 默认情况下，会有一个拷贝构造函数
#if 0
	Test(const Test& another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
	}
#endif

	// 默认情况下，会有一个赋值操作符函数
#if 0
	void operator=(const Test& another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
	}
#endif

	~Test()
	{
		cout << "success!!" << endl;
		cout << "x = " << m_x << ",y = " << m_y << endl;
	}


private:
	int m_x;
	int m_y;
};

int main()
{

	Test t1(101, 101);
	// 构造函数是对象初始化的时候调用
	// 初始化时对对象进行赋值，就是它调用拷贝构造函数操作
	Test t2 = t1;
	Test t3;

	// 初始化以后的操作，是对对象的赋值操作符函数
	t2 = t3;
	
}