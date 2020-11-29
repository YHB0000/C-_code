#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

using namespace std;

class Test
{
public:
	friend void caculate(Test& a, Test& b);
	Test(int x, int y)
	{
		this->m_x = x;
		this->m_y = y;
	}
	~Test()
	{
		cout << "~Test()" << endl;
	}

private:
	int m_x;
	int m_y;
};

void caculate(Test &a, Test &b)
{
	int res;
	int numx = a.m_x - b.m_x;
	int numy = a.m_y - b.m_y;
	res = sqrt(numx * numx + numy * numy);
	cout << res << endl;
}

int main()
{

	Test t1(0, 0);
	Test t2(3, 4);

	caculate(t1, t2);
	
}