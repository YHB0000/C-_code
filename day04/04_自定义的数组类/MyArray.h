#pragma once
#include<iostream>
using namespace std;
class MyArray
{
public:
	MyArray();
	MyArray(int len);
	MyArray(const MyArray& another);
	~MyArray();

	void operator=(const MyArray& another);
	void setData(int index, int data);
	int getData(int index);
	int getLen();
private:
	int len;
	int* space;
};

