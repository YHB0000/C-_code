#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Goods
{
public:
	Goods()
	{
		m_weight = 0;
		next = NULL;
		cout << "创建了一个重量为" << m_weight << "的货物" << endl;
	}
	Goods(int w)
	{
		// 需要创建一个 w 的货物，并且仓库加上这个重量
		m_weight = w;
		next = NULL;
		m_total += w;
		cout << "创建了一个重量为" << m_weight << "的货物" << endl;
	}
	static int get_total()
	{
		return m_total;
	}
	~Goods()
	{
		// 仓库减少这个货物的重量
		cout << "减去了一个重量为" << m_weight << "的货物" << endl;
		m_total -= m_weight;
	}

	Goods* next;

private:
	int m_weight;
	static int m_total;
};

int Goods::m_total = 0;

void bug(Goods*& head, int w)
{
	// 创建一个货物 重量w
	Goods* new_goods = new Goods(w);
	if (head == NULL)
	{
		head = new_goods;
	}
	else
	{
		new_goods->next = head;
		head = new_goods;
	}

}

void sale(Goods*& head)
{
	if (head == NULL)
	{
		cout << "仓库中已无货物！" << endl;
		return;
	}

	Goods* temp = head;

	head = head->next;
	
	delete temp;

	cout << "已出售！" << endl;
	
}

int main()
{
	int choice = 0,w;
	Goods* head = NULL;
	do
	{
		cout << "1.进货" << endl;
		cout << "2.出货" << endl;
		cout << "0.退出" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "请输入要创建货物的重量" << endl;
			cin >> w;
			bug(head, w);
			break;
		case 2:
			sale(head);
			break;
		case 0:
			cout << "已退出" << endl;
			return 0;
		default:
			break;
		}

		cout << "当前仓库的总重量为：" << Goods::get_total() << endl;

	} while (1);
	
}