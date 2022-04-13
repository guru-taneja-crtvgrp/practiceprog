#include<iostream>
using namespace std;

class temprature
{
	int temp_value;
public:
	void get_data(void);
	void disp_data(void);
};
void temprature::disp_data(void)
{

	cout << "temp in celsius is:" <<(temp_value-32)*5/float(9) <<endl;
}
void temprature::get_data(void)
{
	cout << "enter temp in farhenheit:";
	cin >> temp_value;
}
int main()
{
	temprature temp_data;
	temp_data.get_data();
	temp_data.disp_data();
}
