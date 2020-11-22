#pragma once
/*
	为了避免同一个文件被include多次
	一种是#ifndef方式
	一种是#pragma once方式
*/
class Circle
{
public:
	void setter(double r);
	double getter();
	double getArea();
	double getGirth();
private:
	double m_r;
	double m_area;
	double m_girth;
};

