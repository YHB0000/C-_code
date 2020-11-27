#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "----- inital() -----" << endl;
		m_x = 0;
		m_y = 0;
	}
	Test(int x,int y)
	{
		cout << "----- destroy(int, int) -----" << endl;
		m_x = x;
		m_y = y;
	}
	void show()
	{
		cout << "x = " << m_x << ", y = " << m_y << endl;
	}
	~Test()
	{
		cout << "----- destroy -----" << endl;
	}

private:
	int m_x;
	int m_y;
};

// C 语言
void test1()
{
	Test* a = (Test*)malloc(sizeof(Test));
	a->show();
	if (a != NULL)
	{
		free(a);
		a = NULL;
	}
}

/*
	malloc free 是函数，标准库 stdlib.h
	new 在堆上初始化一个对象的时候，会触发对象的构造函数，malloc不能
	free 并不能触发一个对象的析构函数
*/

// C++ 语言
void test2()
{
	Test* p = new Test;
	p->show();
	if (p != NULL)
	{
		delete p;
		p = NULL;
	}

}

int main()
{
	test1();
	test2();
	return 0;
}