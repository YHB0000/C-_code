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
	/*
		构造对象成员的顺序与初始化列表的顺序无关
		而与成员对象的定义顺序有关
		【注】类中的常量声明后，需要在初始化列表中进行初始化
	*/
	B(A &a, A &b,int id, int m) : m_a(a), m_b(b), m_m(m)
	{
		cout << "---- inital B " << id << "----" << endl;
		m_id = id;
	}
	B(int a, int b, int id, int m) : m_a(a), m_b(b), m_m(m)
	{
		cout << "---- inital B " << id << "----" << endl;
		m_id = id;
	}
	void showB()
	{
		cout <<  "id_B = " << m_id << endl;
		cout << "m_B = " << m_m << endl;
		m_a.showA();
		m_b.showA();
	}
	~B()
	{
		cout << "---- destroy ----" << endl;
	}

private:
	// 在声明定义中进行赋值是无效的（语法错误的）
	int m_id;
	// 定义顺序！
	A m_a;
	A m_b;
	const int m_m;
};

void fun()
{
	B c1(1, 2, 3, 999);
	c1.showB();
	cout << "-------------------------------" << endl;
	A d1(10);
	A d2(20);
	B c2(d1, d2, 30 , 9999);
	c2.showB();
}

int main()
{
	fun();
}