#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

//this function takes an int and print table on console
void Table(int x)
{
	for (int i = 1; i <= 10; i++)
	{
		cout <<i * x << endl;
	}
}
//for each value in the vector a function is called
void TableNo(vector<int> Value , void(*Calculate)(int)) //void(*NewFunction)(params))
{
	for (int x : Value) //x is element of value
		Calculate(x);
}
int main()
{
	vector<int> Multiple = {2,3,4};
	TableNo(Multiple, Table);
	_getch();
}