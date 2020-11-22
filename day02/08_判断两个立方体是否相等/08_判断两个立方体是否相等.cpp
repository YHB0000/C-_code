#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Cube
{
public:
	void setter(int a,int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	int get_a()
	{
		return m_a;
	}

	int get_b()
	{
		return m_b;
	}

	int get_c()
	{
		return m_c;
	}

	void getArea()
	{
		cout << "Area: " << (m_a* m_b)*2+ (m_a * m_c) * 2+ (m_c * m_b) * 2 << endl;
	}

	void getVolume()
	{
		cout << "Volume: " << m_a*m_b*m_c << endl;
	}

	void show()
	{
		cout << "m_a" << m_a << endl;
		cout << "m_b" << m_b << endl;
		cout << "m_c" << m_c << endl;
	}

	void jugeCube(Cube &another)
	{
		if (m_a == another.get_a() && m_b == another.get_b() && m_c == another.get_c())
		{
			//another.show();
			cout << "The two cube is same" << endl;
		}
		else {
			//another.show();
			cout << "The two cube is not same" << endl;
		}
	}

	// 同类之间无私处
	void jugeCube_2(Cube& another)
	{
		if (m_a == another.m_a && m_b == another.m_b && m_c == another.m_c)
		{
			cout << "The two cube is same" << endl;
		}
		else {
			cout << "The two cube is not same" << endl;
		}
	}

private:
	int m_a;
	int m_b;
	int m_c;
};

int main()
{
	Cube c1,c2,c3;
	c1.setter(10, 10, 10);
	c2.setter(10, 10, 1);
	c3.setter(10, 10, 10);
	c1.getArea();
	c1.getVolume();
	cout << "------------" << endl;
	c1.jugeCube(c2);
	c1.jugeCube(c3);
	cout << "------------" << endl;
	c1.jugeCube_2(c2);
	c1.jugeCube_2(c3);
}