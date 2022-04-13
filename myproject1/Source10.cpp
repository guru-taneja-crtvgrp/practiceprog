#include<iostream>
#include<iomanip>
using namespace std;
class mathmetic
{
	int mat_elem[3][3];
public:
	void get_matelm(void);
	void disp_matelm(void);
	friend mathmetic trans(mathmetic);
};
void mathmetic::get_matelm(void)
{
	cout << "enter element of matrix:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "mathmetic_elem[" << i << "]" << "[" << j << "]" << "=";
			cin >> mat_elem[i][j];
		}
	}
}
void mathmetic::disp_matelm(void)
{
	cout << "elements of matrix:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(3) << mat_elem[i][j];
		}
		cout << endl;
	}
}

mathmetic trans(mathmetic mobj1)
{
	mathmetic mobj2;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mobj2.mat_elem[i][j] = mobj1.mat_elem[j][i];
		}
	}
	return(mobj1);
}

int main()
{
	mathmetic obj1,obj2;
	obj1.get_matelm();
	obj1.disp_matelm();
	obj2=trans(obj1);
	cout << "matrix after after transpose:" << endl;
	obj2.disp_matelm();
}