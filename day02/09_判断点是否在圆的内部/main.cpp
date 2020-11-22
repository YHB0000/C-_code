#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Circle.h"
#include "Point.h"

using namespace std;

int main()
{
	Circle c1;
	c1.setter(1, 1, 1);
	Point p1,p2;
	p1.setter(0, 0);
	p2.setter(1, 1);
	if (c1.judgePoint(p2))
	{
		cout << "is inner the circle" <<endl;
	}
	else
	{
		cout << "is not inner the circle" << endl;
	}
}