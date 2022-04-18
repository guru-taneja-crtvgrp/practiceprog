#include<iostream>
using namespace std;
void display(char arr[10]);
int main()
{
	char name[10] = "raju";
	display(name);

}

void display(char arr[10])
{
	char *myname=arr;
	cout << "name is " << myname << endl;
}