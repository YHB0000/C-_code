#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// 1. static 成员变量实现了同类对象间信息共享
// 2. static 成员类外存储，求类大小，并不包含在内
// 3. static 成员是命名空间属于类的全局变量，存储在 data 区
// 4. static 成员只能类外初始化
// 5. 可以通过类名访问（无对象生成时亦可），也可以通过对象访问

class Test
{
public:
	Test()
	{
		cout << "----- initail() -----" << endl;
		int m_id = 0;
	}
	Test(int id)
	{
		cout << "----- initail(int) -----" << endl;
		int m_id = id;
	}
	void show()
	{
		cout << "id = " << m_id << endl;
	}
	static int& getm_x()
	{
		return m_x;
	}
	~Test()
	{
		cout << "----- destroy -----" << endl;
	}
	static int m_y;
private:
	int m_id;
	static int m_x;
};

int Test::m_y = 0;

int Test::m_x = 0;

void fun()
{
	Test t1(1);
	Test t2;
	Test::m_y = 100;
	cout << "static value = " << t1.m_y++ << endl;
	cout << "static value = " << t2.m_y++ << endl;
	cout << "static value = " << t1.m_y++ << endl;

	cout << "--------------------------------" << endl;

	Test::getm_x()= 200;
	cout << "static value = " << t1.getm_x()++ << endl;
	cout << "static value = " << t2.getm_x()++ << endl;
	cout << "static value = " << t1.getm_x()++ << endl;
}

int main()
{
	fun();
	return 0;
}