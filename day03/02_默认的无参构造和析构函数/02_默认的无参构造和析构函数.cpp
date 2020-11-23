#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	// 默认情况下，类中会有一个空的构造函数
	// 显示声明构造函数时，之前的空构造函数将被覆盖
	Test()
	{
		m_x = 0;
		m_y = 0;
	}
	Test(int x,int y)
	{
		m_x = x;
		m_y = y;
	}

	// 默认情况下，析构函数与构造函数相同
	// 析构函数不存在重载，或带参数！
	~Test()
	{
		cout << "x, y = " << m_x << ", " << m_y << endl;
		cout << "success!!" << endl;
	}

private:
	int m_x;
	int m_y;
};

int main()
{
	Test t1(1,0);
	Test t2;
}