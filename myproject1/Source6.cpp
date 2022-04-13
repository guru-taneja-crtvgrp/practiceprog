#include<iostream>
#include<iomanip>
using namespace std;

class shop
{
	int count;
	int item_number[50];
	float item_price[50];
	float sum;
public:
	void cnt(void) { count = 0; }
	void get_item(void);
	void remove_item(void);
	void total_sum(void);
	void display_items(void);

};
void shop::get_item(void)
{
	cout << "enter item number here:" << endl;
	cin >> item_number[count];
	cout << "enter item cost:" << endl;
	cin >> item_price[count];
	count++;
}
void shop::remove_item(void)
{
	int num;
	cout << "enter item number need to be removed:" << endl;
	cin >> num;
	for (int i = 0; i <= count-1; i++)
	{
		if (item_number[i] == num)
		{
			item_number[i] = 0;
			item_price[i] = 0;
		}
	}
}

void shop::display_items(void)
{
	for (int i = 0; i <= count-1; i++)
	{
		cout << "item_no.= " << item_number[i] << setw(5) << "item price:" << item_price[i] << endl;
	}
}

void shop::total_sum(void)
{
	sum = 0;
	for (int i = 0; i <= count-1; i++)
	{
		sum = sum + item_price[i];
	}
	cout << "total cost is:" << sum << endl;
}
int main()
{
	shop order;
	order.cnt();
	cout << "select any option:" << endl;
	cout << "press 1 for enter the item and cost: " << endl;
	cout << "press 2 for remove item:" << endl;
	cout << "press 3 for get the total cost:" << endl;
	cout << "press 4 for display items:" << endl;
	cout << "press 5 for exit:" << endl;

	int x;
	do
	{
		cout << "enter your option:" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			order.get_item();
			break;
		case 2:
			order.remove_item();
			break;
		case 3:
			order.total_sum();
			break;
		case 4:
			order.display_items();
			break;
		case 5:
			break;
		default:cout << "invalid input." << endl;

		}
	} while (x != 5);

	cout << "thanks for visiting our shopping portal" << endl;

}