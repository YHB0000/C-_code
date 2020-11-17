#include <iostream>

using namespace std;

// 不建议返回局部变量（函数执行完毕，将销毁）
int& fun1()
{
    int x = 0;
    return x;
}

// 静态变量、常量不会随函数执行完毕而销毁
int& fun2()
{
    static int x = 0;
    return x;
}

int main()
{

    int &x = fun1();
    cout << "&x = " << x << endl;
    cout << "&x = " << x << endl;

    fun2() = 1;
    cout << "-------------------" << endl;
    cout << "fun2() = " << fun2() << endl;
    cout << "fun2() = " << fun2() << endl;
}
