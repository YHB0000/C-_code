#include <iostream>
// _t 代表 typedef 类型
typedef struct student
{
    int num = 39;
}student_t;

namespace spaceA {
    // g_ 代表全局变量 global
    int g_a = 10;
}

namespace spaceB {
    int g_b = 20;

    namespace spaceC {
        struct Dis
        {
            int E;
        };
    }
}

int main()
{
    using namespace std;
    using namespace spaceA;
    using namespace spaceB::spaceC;
    struct Dis x1;
    x1.E = 10;
    student_t x2;
    x2.num = 39;
    cout << "hello" << endl;
    cout << "stu_t.num = " << x2.num << endl;
    cout << "g_a = " << g_a << endl;
    cout << "E = " << x1.E << endl;
}
