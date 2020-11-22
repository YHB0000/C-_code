#pragma once
#include "Point.h"
class Circle
{
public:
	void setter(int x,int y, int r);
	bool judgePoint(Point& p);
private:
	int m_X;
	int m_Y;
	int m_r;
};

