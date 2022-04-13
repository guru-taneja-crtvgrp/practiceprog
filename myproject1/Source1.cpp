#include<iostream>
using namespace std;

class student
{
public:
	void getdata(void);
	void putdata(void);

private:
	char name[20];
	int roll_num;
	float percentage;
};

void student::getdata(void)
{
	cout << "enter name of student" << "\n";
	cin >> name;
	cout << "enter roll num of student" << "\n";
	cin >> roll_num;
	cout << "enter percentage of student" << "\n";
	cin >> percentage;
}

void student::putdata(void)
{
	cout << "the name of student is :" << name <<endl;
	cout << "the roll no. of student is :" << roll_num <<endl;
	cout << "the percentage of student is :" << percentage <<endl;

}

int main()
{
	student info;
	info.getdata();
	info.putdata();
	return 0;
}