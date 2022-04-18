#include<iostream>
using namespace std;
class bank
{
	int age;
	char *name;
	float salary;
public:
	bank(int, char *nptr, float);
	void display(void);
};

void bank::display(void)
{
	cout << "name:" << name << "\n" << "age:" << age << "\n" << "salary:" << salary << endl;
}

bank::bank(int x, char *nptr, float z)
{
	age = x;
	name = nptr;
	salary = z;
}

int main()
{
	int ag;
	char na[10];
	float salr;
	cout << "enter age,name and salary of manager" << endl;
	cin >> ag >> na >> salr;
	bank manager(ag,na,salr);
	manager.display();
	cout << "enter age,name and salary of clerk" << endl;
	cin >> ag >> na >> salr;
	bank clerk(ag,na,salr);
	clerk.display();
	cout << "enter age,name and salary of cashier" << endl;
	cin >> ag >> na >> salr;
	bank cashier(ag,na,salr);
	cashier.display();
}