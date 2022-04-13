#include<iostream>
using namespace std;
class school;
class bank
{
	int amount;
public:
	void get_amount(void);
	friend void calculate_tax(bank, school);
};
void bank::get_amount(void)
{
	cout << "enter the amount:" << endl;
	cin >> amount;
}
class school
{
	int amount;
public:
	void get_amount(void);
	friend void calculate_tax(bank, school);
};
void school::get_amount(void)
{
	cout << "enter the amount:" << endl;
	cin >> amount;
}
void calculate_tax(bank x,school y)
{
	x.amount = x.amount + y.amount;
	if (x.amount <= 10000)
	{
		x.amount = x.amount * 5 / 100;
		cout << "total payable tax is:" << x.amount << endl;
	}
	else
	{
		x.amount = x.amount * 10 / 100;
		cout << "total payable tax is:" << x.amount << endl;
	}
}

int main()
{
	bank manager;
	school teacher;
	manager.get_amount();
	teacher.get_amount();
	calculate_tax(manager, teacher);

}