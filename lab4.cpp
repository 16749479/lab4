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

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	string f;
	PNode h, t, a, b;
	h = t = a = b = NULL;
}

while (1)
{
	cout << "Вид операции " << endl;
	cout << "1 - создать очередь Unemployed" << endl;
	cout << "2 - вывод содержимого очереди Unemployed" << endl;
	cout << "3 - удаление элементов очереди Unemployed" << endl;
	cout << "4 - создать очередь групп Group" << endl;
	cout << "5 - вывод содержимого очереди Group" << endl;
	cout << "6 - удаление элементов очереди Group" << endl;
	cout << "7 - оконьчить " << endl;
	fflush(stdin);
	switch (_getch())
	{
	case '1': cout << "введите количество элементов " << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
			add(h, t, generateRandomUnemployed());
		break;
	case '2': see(h); break;
	case '3': if (h) del(h, t); break;
	case '4':
		sort(h, a, b);
		break;
	case '5': see(a); break;
	case '6':  if (h) del(a, b); break;
	case '7': return 0; break;
	default: cout << "Ошибка " << endl;
	}
}