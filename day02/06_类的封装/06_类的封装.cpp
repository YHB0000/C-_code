#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
	C++ 中结构体和类的用法一致，除默认访问控制权不一样
*/

// 一个结构体的内部，默认的访问控制权是 public
struct MyStruct
{
	int id;
};

// 一个类的内部，默认访问控制器是 private
class Date
{
public:
	void init_date()
	{
		cout << "Please enter date:" << endl;
		cin >> year;
		cin >> month;
		cin >> day;
	}

	void show_date()
	{
		cout << "year:" << year << endl;
		cout << "month:" << month << endl;
		cout << "day:" << day << endl;
	}

	bool is_leap_year()
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			return true;
		}
		else {
			return false;
		}
	}

	int getter()
	{
		return year;
	}

	void setter(int new_year)
	{
		year = new_year;
	}


private:
	int year;
	int month;
	int day;

};

int main()
{
	Date my_date;
	my_date.init_date();
	my_date.show_date();
	if (my_date.is_leap_year())
	{
		cout << my_date.getter() << " is leap year" << endl;
	}
	else
	{
		cout << my_date.getter() << " is not leap year" << endl;
	}
	my_date.setter(2020);
	cout << "setter_year = " << my_date.getter() << endl;
}