#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test(int id,const char* name)
	{
		cout << "----- inital -----" << endl;
		m_id = id;
		int len = strlen(name);
		m_name = (char*)malloc(len + 1);
		strcpy(m_name, name);
	}

	//深拷贝

	Test(const Test& another)
	{
		cout << "----- copy -----" << endl;
		m_id = another.m_id;
		int len = strlen(another.m_name);
		m_name = (char*)malloc(len + 1);
		strcpy(m_name, another.m_name);
	}
	~Test()
	{
		cout << "------ destoryed ------" << endl;
		if (m_name != NULL)
		{
			free(m_name);
			m_name = NULL;
		}
	}
	void show()
	{
		cout << "id = " << m_id << " ,name = " << m_name << endl;
	}

private:
	int m_id;
	char* m_name;
};

void fun()
{
	Test t1(1, "bbb");
	t1.show();

	Test t2(t1);
	t2.show();
}

int main(void)
{
	fun();
}