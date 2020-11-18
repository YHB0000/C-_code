#include <iostream>

// 方式二：
#if 0
// 声明命名空间中的一个变量
using std::cout;
using std::endl;
using std::cin;
#endif // 0

// 方式三：
using namespace std;

int main(void)
{
    int a = 0;
// 方式一：
#if 0
    std::cout << "Hello World!\n";
#endif

    cout << "Enter a char:";

    cin >> a;

    cout << "a=" << a << endl;

    return 0;
}

