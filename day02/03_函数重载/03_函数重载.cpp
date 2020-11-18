#include <iostream>

using namespace std;

/*
    函数重载：
        用同一个函数名定义不同的函数
        1. 函数名相同
        2. 参数个数不同，参数的类型不同，参数顺序不同
        严格匹配参数，则运行对应重载函数
        模糊匹配参数，通过隐式转换寻求一个匹配，找到则调用
    底层实现：
        C++ 利用 name mangling（倾轧）技术，来改函数名，区分参数不同的同名函数
        （用 vcifld 表示 void char int float long double 及其引用）
*/

void ch_print(int x)
{
    cout << "print_int" << endl;
    cout << "x = " << x << endl;
}

void ch_print(double x)
{
    cout << "print_double" << endl;
    cout << "x = " << x << endl;
}

void ch_print(char x)
{
    cout << "print_char" << endl;
    cout << "x = " << x << endl;
}

int main()
{
    int a = 10;
    double b = 10.001;
    char c = 'b';

    ch_print(a);
    ch_print(b);
    ch_print(c);
}
