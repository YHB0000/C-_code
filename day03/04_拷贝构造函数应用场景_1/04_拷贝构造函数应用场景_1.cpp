#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
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
	Test(const Test& another)
	{
		cout << "----- copy -----" << endl;
		m_x = another.m_x;
		m_y = another.m_y;
		cout << "----- ok -----" << endl;
	}
	void operator=(const Test& another)
	{
		cout << "----- = -----" << endl;
		m_x = another.m_x;
		m_y = another.m_y;
		cout << "----- end = -----" << endl;
	}
	void show()
	{
		cout << "x = " << m_x << ",y = " << m_y << endl;
	}
	~Test()
	{
		cout << "----- destory -----" << endl;
	}

private:
	int m_x;
	int m_y;
};

void func(Test t)
{
	cout << "----- start show -----" << endl;
	t.show();
	cout << "----- end show -----" << endl;
}

void test()
{
	cout << "----- Begin -----" << endl;
	Test t1(1, 0);
	func(t1);
	cout << "----- Finished -----" << endl;
}

// 返回匿名对象时，将把返回对象先拷贝给匿名函数
Test func2()
{
	cout << "----- start show -----" << endl;
	Test t2(1, 0);
	t2.show();
	cout << "----- end show -----" << endl;
	return t2;	// 返回一个匿名对象。当一个函数返回一个匿名对象的时候，函数外部没有任何变量接收
				// 这个匿名对象将不会再使用，编译器会直接将这个匿名对象回收掉
}

void test2()
{
	cout << "----- Begin -----" << endl;
	//func2();
	Test t3 = func2();	// 若有对象接收匿名对象，将不会再触发拷贝函数，而是将这个匿名对象转正【直接将匿名对象指向接收的对象】
	cout << "----- Finished -----" << endl;
}

void test3()
{
	cout << "----- Begin -----" << endl;
	Test t4;
	t4 = func2();
	cout << "----- Finished -----" << endl;
}

int main()
{
	//test();
	//test2();
	test3();
}