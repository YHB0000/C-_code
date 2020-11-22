#include "Circle.h"

void Circle::setter(double r)
{
	m_r = r;
}

double Circle::getter()
{
	return m_r;
}

double Circle::getArea()
{
	return m_r * m_r * 3.14;
}

double Circle::getGirth()
{
	return m_r * 2 * 3.14;
}