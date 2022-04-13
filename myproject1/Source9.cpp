#include<iostream>
using namespace std;
class class_2;
class class_1
{
	int c1_data;
public:
	void get_data(void);
	void disp_data(void);
	friend void swap(class_1 &, class_2 &);

};
void class_1::get_data(void)
{
	cout << "enter the data for class1:" << endl;
	cin >> c1_data;
}
void class_1::disp_data(void)
{
	cout << "data for class1:" << c1_data << endl;
}
class class_2
{
	int c2_data;
public:
	void get_data(void);
	void disp_data(void);
	friend void swap(class_1 &, class_2 &);
};

void class_2::get_data(void)
{
	cout << "enter the data for class2:" << endl;
	cin >> c2_data;
}
void class_2::disp_data(void)
{
	cout << "data for class2:" << c2_data << endl;
}
void swap(class_1 &obj1, class_2 &obj2)
{
	obj1.c1_data = (obj1.c1_data) + (obj2.c2_data);
	obj2.c2_data = (obj1.c1_data) - (obj2.c2_data);
	obj1.c1_data = (obj1.c1_data) - (obj2.c2_data);
}
int main()
{
	class_1 input1;
	class_2 input2;
	input1.get_data();
	input1.disp_data();
	input2.get_data();
	input2.disp_data();
	swap(input1,input2);
	cout << "after swapping:"<< endl;
	input1.disp_data();
	input2.disp_data();
}