#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
					      public	   protected	private
	公有继承（public）    | public     | protected  |  不可见
	保护继承（protected） | protected  | protected  |  不可见
	私有继承（private）   | private    | private    |  不可见
*/

class Test
{
public:
	int pub;
protected:
	int pro;
private:
	int pri;
};

class Child:public Test
{
public:
	void fun()
	{
		cout << pub << endl;
		cout << pro << endl;
		//cout << pri << endl;
	}
};

class Child :protected Test
{
public:
	void fun()
	{
		cout << pub << endl;
		cout << pro << endl;
		//cout << pri << endl;
	}
};

class Child :private Test
{
public:
	void fun()
	{
		cout << pub << endl;
		cout << pro << endl;
		//cout << pri << endl;
	}
};

int main()
{

	return 0;
}