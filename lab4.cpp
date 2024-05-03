#include <iostream>
#include <Windows.h>
#include <Conio.h>
#include <string>

using namespace std;

struct Unemployed
{
	string surname;
	int age;
	char gender;
	string education;
	string profession;
	string position;
	int last_position_experience;
	int total_experience;
	string registration_date;
	double desired_salary;
	string desired_position;

}

struct Node
{
	Unemployed data;
	Node* next;
};

typedef Node* PNode;

void add(PNode& h, PNode& t, Unemployed dat)
{
	PNode n;


	n = new Node;
	n->next = 0;

	if (!n)
	{
		cout << "нет свободной памяти" << endl;
		return;
	}

	if (!h)
		h = t = n;
	else
	{
		t->next = n;
		t = n;
	}
	n->data = dat;
	cout << "элемнт создан" << endl;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	string f;
	PNode h, t, a, b;
	h = t = a = b = NULL;
}

void del(PNode& h, PNode& t)
{
	PNode p;
	if (t == h)
	{
		delete(h);
		h = t = NULL;
		cout << "Очередь пуста " << endl;
		return;
	}
	p = h->next;
	delete (h);
	h = p;
}

void see(PNode h)
{
	cout << "Вывод содержимого" << endl;
	PNode h1;
	h1 = h;
	if (!h1)
	{
		cout << "Очередь пуста" << endl;
		return;
	}
	do
	{
		cout << h1->data.surname << endl;
		cout << h1->data.age << endl;
		cout << h1->data.gender << endl;
		cout << h1->data.education << endl;
		cout << h1->data.profession << endl;
		cout << h1->data.position << endl;
		cout << h1->data.last_position_experience << endl;
		cout << h1->data.total_experience << endl;
		cout << h1->data.registration_date << std::endl;
		cout << h1->data.desired_salary << endl;
		cout << h1->data.desired_position << endl;
		cout << endl;

		h1 = h1->next;
	} while (h1 != NULL);
}
