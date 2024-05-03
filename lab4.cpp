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
