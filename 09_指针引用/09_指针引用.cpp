#include <iostream>

using namespace std;

struct MyStruct
{
	int id;
	char name[64];
};

int get_mem2(struct MyStruct*& s)
{
	s = (struct MyStruct*)malloc(sizeof(struct MyStruct));
	if (s == NULL) {
		return -1;
	}
	s->id = 300;
	strcpy(s->name, "BB");

	return 0;
};

void free_mem2(struct MyStruct*& r)
{
	if (r != NULL) {
		free(r);
		r = NULL;
	}
}

int main()
{
	struct MyStruct* s = NULL;
	get_mem2(s);
	cout << "id = " << s->id << ", name = " << s->name << endl;
	free_mem2(s);
}
