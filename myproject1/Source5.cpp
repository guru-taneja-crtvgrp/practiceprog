#include<iostream>
using namespace std;

class convrt
{
	char num[16];
public:
	void get_binary_num(void);
	void check_binary_num(void);
	void comp_bin_num(void);
};
void convrt::get_binary_num(void)
{
	cout << "enter your 8 bit binary number:";
	cin >> num;
}
void convrt::check_binary_num(void)
{
	int i;
	for (i = 0; i <= 7; i++)
	{
		if (num[i] != '0' && num[i] != '1')
		{
			cout << "entered value is not in valid binary format!" << endl;
			exit(0);
		}
	}
}

void convrt::comp_bin_num(void)
{
	check_binary_num();

	for (int i = 0; i <= 7; i++)
	{
		if (num[i] == '0')
		{
			num[i] = '1';
		}
		else
		{
			num[i] = '0';
		}
	}
	cout << "complemented num is :" << endl;
	for (int i = 0; i <= 7; i++)
	{
		cout << num[i];
	}
}
int main()
{
	convrt nu;
	nu.get_binary_num();
	nu.comp_bin_num();
}