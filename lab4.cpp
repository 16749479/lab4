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





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	string f;
	PNode h, t, a, b;
	h = t = a = b = NULL;
}