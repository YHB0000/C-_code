#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
	子类对象可以当作父类对象使用
	子类对象可以直接赋值给父类对象
	子类对象可以直接初始化父类对象

	父类指针可以直接指向子类对象
	父类引用可以直接引用子类对象
*/

class Parent
{
public:
	Parent()
	{
		this->i = 0;
		this->j = 1;
	}
	void show()
	{
		cout << "i = " << this->i << endl;
	}
	~Parent()
	{
		cout << "bey" << endl;
	}
	int i;
	int j;	
};

class Child :public Parent
{
public:
	Child()
	{
		this->i = 10;
		this->j = 11;
		this->k = 12;
	}
	~Child()
	{
		cout << "bey" << endl;
	}
	int k;
};

void test(Parent& p)
{
	p.show();
}

int main()
{
	
	Parent* pp = NULL;
	Child* cp = NULL;

	Parent p;
	Child c;

	//p = c;
	//p.show();

	// 内存布局能够满足父类指针的全部需求，可以用一个子类对象地址给父类指针赋值
	pp = &c;
	pp->show();

	cout << "------------------" << endl;
	test(p);
	test(c);
	cout << "------------------" << endl;

	return 0;
}