#include "Circle.h"

void Circle::setter(int x, int y, int r)
{
	m_X = x;
	m_Y = y;
	m_r = r;
}

bool Circle::judgePoint(Point &p)
{
	int result = (p.getX()-m_X)* (p.getX() - m_X) + (p.getY() - m_Y)* (p.getY() - m_Y);
	if (result > m_r*m_r)
	{
		return false;
	}
	else
	{
		return true;
	}
}