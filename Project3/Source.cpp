#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;
void Table(int x)
{
	for (int i = 1; i <= 10; i++)
	{
		cout <<i * x << endl;
	}
}
void TableNo(vector<int> Value , void(*Calculate)(int))
{
	for (int x : Value)
		Calculate(x);
}
int main()
{
	vector<int> Multiple = {2,3,4};
	TableNo(Multiple, Table);
	_getch();
}