#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Stu
{
public:
	Stu(int id, string name)
	{
		this->m_id = id;
		this->m_name = name;
	}

	void show()
	{
		cout << "id : " << this->m_id << endl;
		cout << "name : " << this->m_name << endl;
	}

private:
	int m_id;
	string m_name;
};

class Gra:public Stu
{
public:
	Gra(int id, string name, int score) :Stu(id, name)
	{
		this->m_score = score;
	}

	void show()
	{
		Stu::show();
		cout << "score : " << this->m_score << endl;
	}

private:
	int m_score;
};

int main()
{
	Gra g(1, "bb", 100);
	g.show();
}