#include "MyArray.h"

MyArray::MyArray()
{
	this->len = 0;
	this->space = NULL;
}
MyArray::MyArray(int len)
{
	if (len <= 0)
	{
		this->len = 0;
		cout << "Can't init a error lengh array" << endl;
		return;
	}
	this->len = len;
	this->space = new int[this->len];
	cout << "----- init array[" << this->len << "] -----" << endl;
}
// Éî¿½±´
MyArray::MyArray(const MyArray& another)
{
	if (another.len >= 0)
	{
		this->len = another.len;
		this->space = new int[this->len];
		for (int i = 0; i < this->len; i++)
		{
			this->space[i] = another.space[i];
		}
		cout << endl;
		cout << "----- copy -----" << endl;
	}
}
void MyArray::operator=(const MyArray& another)
{

	if (another.len >= 0)
	{
		this->len = another.len;
		this->space = new int[this->len];
		for (int i = 0; i < this->len; i++)
		{
			this->space[i] = another.space[i];
		}
		cout << endl;
		cout << "----- copy -----" << endl;
	}
}
MyArray::~MyArray()
{
	this->len = 0;
	if (this->space != NULL)
	{
		delete[] this->space;
		this->space = NULL;
		len = 0;
	}
	cout << "----- destroy -----" << endl;
}

void MyArray::setData(int index, int data)
{
	if (this->space != NULL)
	{
		if (index >= 0)
		{
			this->space[index] = data;
		}
	}
	else
	{
		cout << "error asight" << endl;
	}
}
int MyArray::getData(int index)
{
	if (index >= 0)
	{
		return this->space[index];
	}
}
int MyArray::getLen()
{
	return this->len;
}