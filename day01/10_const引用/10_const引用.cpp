#include <iostream>

using namespace std;

int main()
{
	const int a = 10;
	const int& x1 = a;

	cout << "&x1 = a = " << x1 <<endl;
	cout << endl;

	int b = 20;
	const int& x2 = b;
	cout << "&x2 = b = " << x2 << endl;

	b = 30;
	cout << "&x2 = b = " << x2 << endl;


}
