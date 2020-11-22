#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle my_c;
	my_c.setter(5);
	cout << "Radie:" << my_c.getter() << endl;
	cout << "Area:" << my_c.getArea() << endl;
	cout << "Girth:" << my_c.getGirth() << endl;
}