#include<iostream>
using namespace std;
class bank
{
	int age;
	const char* name;
	float salary;
public:
	bank(int, const char nptr[10], float);
	void display(void);
};

void bank::display(void)
{
	cout << "name:" << name << "\n" << "age:" << age << "\n" << "salary:" << salary << endl;
}

bank::bank(int x,const char nptr[10], float z)
{
	age = x;
	name = nptr;
	salary = z;
}

int main()
{
	bank manager(45,"vikas",65000.750);
	manager.display();
	bank clerk(35,"balu",45000.450);
	clerk.display();
	bank cashier(29,"jagu", 32000.425);
	cashier.display();
}