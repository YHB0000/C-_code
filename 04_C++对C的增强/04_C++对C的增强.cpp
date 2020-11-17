#include <iostream>

using namespace std;

struct Student
{
	char name[64];
	int age;
};

enum season { SPR, SUM, AUT, WIN };

void fun1()
{
	cout << "---------------------" << endl;
	int i = 0;
	cout << "i = " << i << endl;
	int k = 4;
	cout << "k = " << k << endl;
}

void fun2()
{
	//Student是一种新的数据类型
	Student s1 = { "wang",1 };
	Student s2 = { "wang2",2 };
	cout << "---------------------" << endl;
	cout << "s1.name = " << s1.name << endl;
	cout << "s2.name = " << s2.name << endl;
}

void fun3()
{
	bool a = true;
	bool b = false;
	cout << "---------------------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void fun4()
{
	int a = 10, b = 30;
	(a < b ? a : b) = 30;
	int c = (a < b ? a : b);
	cout << "---------------------" << endl;
	cout << "c = " << c << endl;
}

void fun5()
{
	enum season	s = SPR;
	//s	= 0;		//error,但是C语⾔可以通过
	//s = SUM;
	cout << "---------------------" << endl;
	cout << "s = " << s << endl;
}

int main()
{
	// 1. “实用性” 增强
	// 部分老版编译器中，C语言中的变量必须在作用域开始时定义
	// C++中的变量随用随定义
	fun1();

	// 2. 变量检测 增强
	// C语言中，重复定义多个同名的全局变量是合法的
	//【C语言中多个同名的全局变量最终都会被链接到全局数据区的同一个地址当中】
	// C++语言中，不允许定义多个同名的全局变量

	// 3. struct类型 增强
	// C语言的 struct 定义了一组变量的集合，C编译器并不认为这是一种新的类型
	// C++中的 struct 是一中新类型的定义声明
	fun2();

	// 4. 新增 bool 类型
	// C++中的 bool 类型理论上只占用一个字节
	// true（非0）和 false（0）
	fun3();

	// 5. 三目运算符 增强
	// C语言中表达式不能作为左值
	//【C语言中，表达式的元素结果放在寄存器中，且表达式的返回值是一个数】
	// C++中，表达式返回的值是变量本身
	//【注：三目运算符可能返回值中如果有一个常量值，则不能作为左值使用，例如：(a<b) ? 1 : b】
	//【补：当左值的条件：要有内存空间，C++编译器帮助我们取一个地址而已】
	fun4();

	// 6. const 增强
	// C语言中虽然使用const定义了变量,但通过间接赋值的方式（指针指定对应地址）,可以改变数值大小.
	// 所以在c语言中,const定义的变量,不是真正意义的常量,仍然可以改变数值的大小
	// C++中，const是真正的常量，通过任何方式都不可改变
	// C++中 const 与 #define 的不同之处
	// C++的 const 常量由编译器处理, 提供类型检查和作用域检查, 
	// C++的 #define 宏定义由预处理器处理, 单纯的文本替换.

	// 7. 枚举变量 增强
	// C语言中枚举本质就是整型，枚举变量可以用任意整型赋值
	// C++中枚举变量，只能用被枚举出来的元素初始化
	fun5();
}

