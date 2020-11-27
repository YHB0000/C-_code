#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Student
{
public:
	Student(int id,double score)
	{
		m_id = id;
		m_score = score;
		m_num++;
		m_total += score;
		cout << "Initail stu" << id << " score: " << score << endl;
	}
	static void getNu()
	{
		cout << "The students number : " << m_num << endl;
	}
	static void getAv()
	{
		cout << "The average : " << m_total / m_num << endl;
	}
	~Student()
	{
		m_num--;
		m_total -= m_score;
	}

private:
	int m_id;
	double m_score;
	static int m_num;
	static double m_total;
};

int Student::m_num = 0;
double Student::m_total = 0.0;

int main()
{
	Student s1(1, 90);
	Student s2(2, 80);
	Student s3(3, 90);
	Student s4(4, 80);
	Student::getNu();
	Student::getAv();
	return 0;
}