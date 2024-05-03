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

void sort(PNode h, PNode& a, PNode& b)
{
	PNode h1;
	Unemployed f;
	int c;
	h1 = h;

	if (!h1)
	{
		cout << "Очередь пуста" << endl;
		return;
	}
	cout << endl;
	cout << "Вид операции " << endl;
	cout << "1 - Поиск по фамилии " << endl;
	cout << "2 - Поиск по возрасту " << endl;
	cout << "3 - Поиск по полу " << endl;
	cout << "4 - Поиск по професии " << endl;
	cout << "5 - Поиск по образование " << endl;
	cout << "6 - Поиск по должности " << endl;
	cout << "7 - Поиск по опыту работы в последнем месте " << endl;
	cout << "8 - Поиск по опыту работы " << endl;
	cout << "9 - Поиск по дате регистрации " << endl;
	cout << "10 - Поиск по желаемой зарплате " << endl;
	cout << "11 - Поиск по желаемой должности " << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "введите фамилию" << endl;
		cin >> f.surname;
		do
		{
			if (h1->data.surname == f.surname)
				add(a, b, h1->data);


			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 2:
		cout << "введите возраст" << endl;
		cin >> f.age;
		do
		{
			if (h1->data.age == f.age)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 3:
		cout << "введите пол" << endl;
		cin >> f.gender;
		do
		{
			if (h1->data.gender == f.gender)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 4:
		cout << "введите професию" << endl;
		cin >> f.profession;
		do
		{
			if (h1->data.profession == f.profession)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 5:
		cout << "введите образование" << endl;
		cin >> f.education;
		do
		{
			if (h1->data.education == f.education)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 6:
		cout << "введите должность" << endl;
		cin >> f.position;
		do
		{
			if (h1->data.position == f.position)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 7:
		cout << "опыту работы в последнем месте " << endl;
		cin >> f.last_position_experience;
		do
		{
			if (h1->data.last_position_experience == f.last_position_experience)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 8:  cout << "опыту работы" << endl;
		cin >> f.total_experience;
		do
		{
			if (h1->data.total_experience == f.total_experience)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 9:
		cout << "дате регистрации " << endl;
		cin >> f.registration_date;
		do
		{
			if (h1->data.registration_date == f.registration_date)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 10:
		cout << "дате желаемой зарплате " << endl;
		cin >> f.desired_salary;
		do
		{
			if (h1->data.desired_salary == f.desired_salary)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	case 11:
		cout << "дате желаемой должности " << endl;
		cin >> f.desired_position;
		do
		{
			if (h1->data.desired_position == f.desired_position)
				add(a, b, h1->data);

			h1 = h1->next;
		} while (h1 != NULL);
		break;
	default: cout << "Ошибка " << endl;
	}
}

string generateSurname() {
	string surnames[] = { "Иванов", "Кузнецов", "Соколов", "Попов", "Лебедев", "Морозов", "Волков" };
	return surnames[rand() % (sizeof(surnames) / sizeof(surnames[0]))];
}

int generateRandomNumber(int min, int max) {
	return min + rand() % (max - min + 1);
}

char generateGender() {
	return rand() % 2 == 0 ? 'М' : 'Ж';
}

string generateEducation() {
	string educations[] = { "Бакалавриат", "Магистр", "Доктор наук" };
	return educations[rand() % (sizeof(educations) / sizeof(educations[0]))];
}

string generateProfession() {
	string professions[] = { "Инженер", "Врач", "Педагог", "Художник", "Повар", "Юрист" };
	return professions[rand() % (sizeof(professions) / sizeof(professions[0]))];
}

string generateDate() {
	int year = generateRandomNumber(2000, 2024);
	int month = generateRandomNumber(1, 12);
	int day = generateRandomNumber(1, 28);
	return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
}

double generateSalary() {
	return generateRandomNumber(1000, 10000);
}

string generatePosition() {
	string positions[] = { "Менеджер", "Разработчик", "Бухгалтер", "Проектировщик", "Аналитик" };
	return positions[rand() % (sizeof(positions) / sizeof(positions[0]))];
}

Unemployed generateRandomUnemployed() {
	Unemployed p;
	p.surname = generateSurname();
	p.age = generateRandomNumber(20, 65);
	p.gender = generateGender();
	p.education = generateEducation();
	p.profession = generateProfession();
	p.position = generatePosition();
	p.last_position_experience = generateRandomNumber(0, 20);
	p.total_experience = generateRandomNumber(p.last_position_experience, 40);
	p.registration_date = generateDate();
	p.desired_salary = generateSalary();
	p.desired_position = generatePosition();
	return p;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	string f;
	PNode h, t, a, b;
	h = t = a = b = NULL;


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
}