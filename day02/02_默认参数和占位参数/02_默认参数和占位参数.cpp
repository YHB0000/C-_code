#include <iostream>

using namespace std;

int area(int w = 9, int h = 8, int l = 3)
{
    return w * h * l;
}

void fun(int x, int = 0)
{
    cout << "x = " << x << " with 占位符 " << endl;
}

int main()
{
    int v = 1;
    cout << "area = " << area() << endl;
    cout << "-----------------------" << endl;
    fun(v);
}
