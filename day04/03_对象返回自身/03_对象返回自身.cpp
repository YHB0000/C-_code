#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test(int x,int y)
	{
		//cout << "----- initail -----" << endl;
		this->m_x = x;
		this->m_y = y;
	}
	Test& add(Test& another)
	{
		this->m_x += another.m_x;
		this->m_y += another.m_y;
		return *this;	// 如果想返回一个对象的本身，在成员方法中，用 *this 返回
	}
	void show()
	{
		cout << "----- show -----" << endl;
		cout << "m_x = " << this->m_x << ", m_y = " << this->m_y << endl;
	}
	~Test()
	{
		cout << "----- destroy -----" << endl;
	}

private:
	int m_x;
	int m_y;
};

int main()
{
	Test t1(10, 10);
	Test t2(1, 1);
	t1.add(t2).add(t2);
	t1.show();
}