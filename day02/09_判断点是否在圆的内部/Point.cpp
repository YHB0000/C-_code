#include "Point.h"

void Point::setter(int x, int y)
{
	m_X = x;
	m_Y = y;
}
int Point::getX()
{
	return m_X;
}
int Point::getY()
{
	return m_Y;
}