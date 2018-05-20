//This program takes an integer representing change from 1-99 and determines the least amount of quarters, dimes, 
//nickels and pennies equal to that value. Then outputs the result.
#include <iostream>
using namespace std;

int totalChange = 0;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;

void calculateChange(int totalChange, int &quarters, int &dimes, int &nickels, int &pennies)
{
	if (totalChange >= 25)
	{
		quarters = (totalChange - totalChange % 25) / 25;
		totalChange = totalChange - quarters * 25;
	}
	else
		quarters = 0;
	if (totalChange >= 10)
	{
		dimes = (totalChange - totalChange % 10) / 10;
		totalChange = totalChange - dimes * 10;
	}
	else
		dimes = 0;
	if (totalChange >= 5)
	{
		nickels = (totalChange - totalChange % 5) / 5;
		totalChange = totalChange - nickels * 5;
	}
	else
		nickels = 0;
	pennies = totalChange;
}

int main()
{
	cout << "Please enter amount of change to dispense between 1 and 99 cents." << endl;
	cin >> totalChange;

//Returns an error message if totalChange is not in the acceptable range until it is corrected.	
	int error;
	do
	{
		if (totalChange < 1 || totalChange > 99)
		{
			error = 1;
			cout << "Error, please enter a value between 1 and 99." << endl;
			cin >> totalChange;
		}
		else
			error = 0;
		if (error == 1)
		{
			
		}
	} while (error);

	calculateChange(totalChange, quarters, dimes, nickels, pennies);
	cout << totalChange << " cent(s) is: " << quarters << " quarters, " << dimes << " dimes, " <<
		nickels << " nickels, and " << pennies << " pennies." << endl;
	system("pause");
	return 0;
}