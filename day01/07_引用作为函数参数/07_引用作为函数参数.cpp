#include <iostream>

using namespace std;

void swap1(int* x,int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

struct MyStruct
{
    char name[10];
    int age;
};

void Prints1(struct MyStruct s)                 // 存在拷贝动作，不提倡（特别是项目内容操作多时）
{
    cout << s.name << " , " << s.age << endl;
}

void Prints2(struct MyStruct *s)
{
    cout << s->name << " , " << s->age << endl;
}

void Prints3(struct MyStruct &s)
{
    cout << s.name << " , " << s.age << endl;
}

int main()
{
    int a = 0, b = 1;
    cout << "-------------------------" << endl;
    cout << "a = " << a  << ",b = " << b << endl;
    swap1(&a, &b);
    cout << "a = " << a << ",b = " << b << endl;
    
    cout << "-------------------------" << endl;
    cout << "a = " << a  << ",b = " << b << endl;
    swap2(a, b);
    cout << "a = " << a << ",b = " << b << endl;

    MyStruct s = { "BB" , 18 };
    cout << "-------------------------" << endl;
    Prints1(s);
    cout << "-------------------------" << endl;
    Prints2(&s);
    cout << "-------------------------" << endl;
    Prints3(s);

}
