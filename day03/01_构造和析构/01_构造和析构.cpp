#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	// 带参构造函数
	Test(int x,int y)
	{
		m_x = x;
		m_y = y;
		m_name = (char*)malloc(100);
	}

	// 无参构造函数
	Test()
	{
		m_x = 0;
		m_y = 0;
	}

	// 析构函数：
	//		在一个对象销毁之前，将自动调用析构函数
	~Test()
	{
		cout << "success!" << endl;
		if (m_name != NULL)
		{
			free(m_name);
		}
	}

	void show()
	{
		cout << "x = " << m_x << ",y = " << m_y <<endl;
	}

private:
	int m_x;
	int m_y;
	char* m_name;
};

void fun()
{
	Test t1(1, 0);
	t1.show();
}

int main()
{
	fun();
	Test t2;
	t2.show();
}