#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test(int id)
	{
		cout << "----- initail -----" << endl;
		m_id = id;
	}
	void this_show()
	{
		cout << "----- this_show -----" << endl;
		cout << "m_id = " << m_id << endl;
		this->m_id = 0;
		cout << "----- this_reini -----" << endl;
		cout << "m_id = " << m_id << endl;
	}
	void normal_show() const
	{
		cout << "----- normal_show -----" << endl;
		cout << "m_id = " << m_id << endl;
		//this->m_id = 0;
	}
	~Test()
	{
		cout << "----- destroy -----" << endl;
	}

private:
	int m_id;
};

int main()
{
	Test t(100);
	t.normal_show();
	t.this_show();
	t.normal_show();
}