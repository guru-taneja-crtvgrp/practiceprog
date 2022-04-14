#include<iostream>
using namespace std;

class record
{
	char name[10];
	int roll_num;
	float marks;
public:
	void get_data(void);
	void put_data(void);
};
void record::get_data(void)
{
	cout << "enter student name:";
	cin >> name;
	cout << "enter student roll num:";
	cin >> roll_num;
	cout << "enter student marks:";
	cin >> marks;
}

void record::put_data(void)
{
		cout << "name of student:" << name << endl;
		cout << "roll num:" << roll_num << endl;
		cout << "marks:" << marks << endl; 
}
int main()
{

	record stu[5];
	int i;
	for (i = 0; i <= 4; i++)
	{
		stu[i].get_data();
	}
	for (i = 0; i <= 4; i++)
	{
		stu[i].put_data();
	}
}