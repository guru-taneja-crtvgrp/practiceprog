#include<iostream>
using namespace std;
class deposit
{
	int amount;
	int total_amount;
public:
	void get_amount(void);
	void display_total(void);
	void total_sum(deposit a, deposit b);

};
void deposit::get_amount(void)
{
	cout << "enter amount:" << endl;
	cin >> amount;
}
void deposit::display_total(void)
{
	cout << "total deposited amount by all is:" << total_amount << endl;
}
void deposit::total_sum(deposit a, deposit b)
{
	total_amount = a.amount + b.amount;
}

int main()
{
	deposit custmr1, custmr2, custmr3;
	custmr1.get_amount();
	custmr2.get_amount();
	custmr3.total_sum(custmr1, custmr2);
	custmr3.display_total();
}