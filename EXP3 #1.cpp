#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
	int num [10], i, n;
	int largest = 0;
	int smallest = 0;
	int ave = 0;
	int temporary = 0;
	
	for (int i=0; i<10; i++)
	{
		cout << "Please enter number " << i + 1 << ":" <<endl;
		cin >> num[i];
	}
	
	
	smallest = num [0];
	largest = num [0];
	for (int i=1; i <= 10; i++)
	{
		temporary = num[i];
		if (temporary < smallest)
		smallest = temporary;
		
		if (temporary > largest)
		largest = temporary;
		
	
		
	
	
		
	}
	
	cout << "Largest number is: " << largest <<endl;
	cout << "Smallest number is: " << smallest << endl;
	

	
	
	
	

	
	

	
_getch();
return 0;
}
