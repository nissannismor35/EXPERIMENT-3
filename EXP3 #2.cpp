#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
	int i, day[7], num;
	
	for (int i=1; i<=7; i++)
	{
		cout << "Province A, day " << i << ":" <<endl;
		cin >> num;
	}
	
	for (int i=1; i<=7; i++)
	{
		cout << "Province B, day " << i << ":" <<endl;
		cin >> num;
	}
	
	for (int i=1; i<=7; i++)
	{
		cout << "Province C, day " << i << ":" <<endl;
		cin >> num;
	}
}
