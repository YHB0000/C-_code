#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		m_id = 0;
	}
	A(int id)
	{
		cout << "---- inital A " << id << " ----" << endl;
		m_id = id;
	}
	void showA()
	{
		cout << "id_A = " << m_id << endl;
	}
	~A()
	{
		cout << "---- destroy ----" << endl;
	}

private:
	int m_id;
};

class B
{
public:
	B()
	{
		m_id = 0;
	}
	B(int id)
	{
		m_id = id;
	}
	/*
		构造对象成员的顺序与初始化列表的顺序无关
		而与成员对象的定义顺序有关
	*/
	B(A &a, A &b,int id) : m_a(a), m_b(b)
	{
		cout << "---- inital B " << id << "----" << endl;
		m_id = id;
	}
	B(int a, int b, int id) : m_a(a), m_b(b)
	{
		cout << "---- inital B " << id << "----" << endl;
		m_id = id;
	}
	void showB()
	{
		cout <<  "id_B = " << m_id << endl;
		m_a.showA();
		m_b.showA();
	}
	~B()
	{
		cout << "---- destroy ----" << endl;
	}

private:
	int m_id;
	// 定义顺序！
	A m_a;
	A m_b;
};

void fun()
{
	B c1(1, 2, 3);
	c1.showB();
	cout << "-------------------------------" << endl;
	A d1(10);
	A d2(20);
	B c2(d1, d2, 30);
	c2.showB();
}

int main()
{
	fun();
}