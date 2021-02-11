// monthly and annual pay increas calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    const double percentage_increase = 0.076;
    double monthly_pay, annual_pay, new_annual_pay, retroactive_pay;
    cout << "You have received a 7.6% pay annual pay increase\n";
    cout << "This program will output your new annual and monthly salary based on your previous annual salary\n";
    cout << "Please input your annual salary: $";
    cin >> annual_pay;
    
    while (annual_pay > 0)
    {
        new_annual_pay = (annual_pay * percentage_increase) + annual_pay;
        retroactive_pay = (new_annual_pay / 2) - (annual_pay / 2);
        monthly_pay = new_annual_pay / 12;
        cout << "Your new annual pay is: $" << new_annual_pay << endl;
        cout << "Your new monthly pay is: $" << monthly_pay << endl;
        cout << "Pay retroactive for 6 months is: $" << retroactive_pay << endl;

        cout << "If you would like to perform another calculation enter another annual pay, if not, enter 0\n" << "$";
        cin >> annual_pay;
    }

 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
