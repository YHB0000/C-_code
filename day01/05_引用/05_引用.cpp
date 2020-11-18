#include <iostream>

/*
    1. 引用没有定义，是一种关系类型声明。声明它和原有某一变量（实体）的关系。
       故 类型与原类型保持一致，且不分配内存。与被引用的变量有相同的地址

    2. 声明的时候必须初始化，一经声明，不可变更

    3. 可对引用，再次引用。多次引用的结果，是某一变量具有多个别名

    4. &符号前有数据类型时，是应用。 其它皆为取地址
*/

void change_value1(int* x)
{
    *x = 1;
}

void change_value2(int& x)
{
    x = 0;
}

int main()
{
    int a;
    int b = 30;
    int& re = a;    // int& 使用引用数据类型， re 就是 a 的别名
    re = 50;
    re = b;         
    re = 50;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    //int& re2;       // 引用一定要初始化

    int& res = re;
    res = 100;
    std::cout << "a = " << a << std::endl;
    
    // 引用的好处
    int value = 0;
    std::cout << "-----------------" << std::endl;
    std::cout << "value = " << value << std::endl;
    change_value1(&value);
    std::cout << "value = " << value << std::endl;
    
    std::cout << "-----------------" << std::endl;
    std::cout << "value = " << value << std::endl;
    change_value2(value);
    std::cout << "value = " << value << std::endl;



}