#pragma once
/*
	Ϊ�˱���ͬһ���ļ���include���
	һ����#ifndef��ʽ
	һ����#pragma once��ʽ
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

