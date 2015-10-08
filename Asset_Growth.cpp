// Asset_Growth.cpp : Defines the entry point for the console application.
/*
Mason Savlas
September 28, 2012
Assignment Asset Growth

this assignment will take your principal, intrest rate, time(in years)
and the number of times compounded per year and give you the amount earned
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{//Begin Main

	int years;			//the time (in years) 
	double principle;	//The principle amount
	double r;			//The intrest rate
	int compound;		//fequency of compounding
	double amountEarned;//The amount 	
	int responce = 1;

	while (responce == 1)		//will let the user run the program again if he/she wants to
	{//Begin While

		cout << "Enter the principle amount: ";
		cin >> principle;

		if (principle >= 0)		//varifys that principle is a positve number 
		{//Begin principle 

			cout << "Enter the intrest rate: ";
			cin >> r;

			if (r >= 0)				//varifys that the intrest rate is a positive number
			{//Begin Intrest Rate


				cout << "Enter the time (in years): ";
				cin >> years;

				if (years >= 0) 		//varifys that the number of years is a positve number
				{//Begin years


					cout << "Enter the number of times compunded each year\n(1 for annually, 2 for semi-annually, 4 for quarterly): ";
					cin >> compound;

					if (compound >= 0 && ((compound = 1) || (compound = 2) || (compound = 4)))		//varifys that the number of time compunded is either once, twice, or four times 
					{//Begin Compound

						amountEarned = principle * pow(1 * r, compound);

						cout.setf(ios::fixed);
						cout.setf(ios::showpoint);
						cout.precision(2);
						cout << "\n" << endl;

						cout << "The amount you earned is: $" << amountEarned << endl;;

						cout << "\n" << endl;

					}//End compound
				}//End intrest rate 			
			}//End Years		
		}//End Principle

		else if (principle <= 0)
			cout << "Please enter a positve number" << endl;

		else if (r <= 0)
			cout << "Please enter a positve number" << endl;

		else if (years <= 0)												//if the user enters any information wrong it will exit the process
			cout << "Please enter a positve number" << endl;			//and allow the user to try again if they want to


		else if (compound <= 0)
			cout << "Please enter a positve number" << endl;

		else if ((compound != 1) || (compound != 2) || (compound != 3))
			cout << "Please enter 1 for annually, 2 for semi-annually, 4 for quarterly" << endl;

		cout << "Do you wish to run this program again? (1 for yes, 0 for no): ";
		cin >> responce;
		cout << "\n" << endl;

	}
	return 0;
}//End Main

