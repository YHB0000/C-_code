#include <iostream>

using namespace std;

class Animal
{
public:
	char name[64];
	char color[64];

	void PrintAll()
	{
		cout << "name: " << name << endl;
		cout << "color: " << color << endl;
	}

	void write()
	{
		cout << "write something ..." << endl;
	}

	void run()
	{
		cout << "running ..." << endl;
	}

private:

};

int main()
{
	Animal dog;
	strcpy_s(dog.name, "dog");
	strcpy_s(dog.color, "black");
	dog.PrintAll();
	dog.run();

	cout << "--------------" << endl;
	Animal sheep;
	strcpy_s(sheep.name, "sheep");
	strcpy_s(sheep.color, "white");
	sheep.PrintAll();
	sheep.write();
}
