/*
Hikmatullah Hussain Zada
Student number: 0761906
COIS 2040 Assignment 1
*/

// Libraries
#include <iostream>
#include <iomanip>
using std::cout, std::cin, std::endl;

// Main program
int main()
{
    // Declaration of variables
    int casesPerDay;
    double profitPerBottle = 0.20;

    // Ask the user to input the number of cases sold per day
    cout << "Enter the number of cases sold per day: ";
    cin >> casesPerDay;

    // Check if input is valid, could of possibly sold zero cases in a day.
    while (casesPerDay < 0)
    {
        // Ask the user to input the number of cases again
        cout << "Invalid input \nEnter the number of cases sold per day: ";
        cin >> casesPerDay;
    }

    // Declare and calculate values
    int bottlesPerDay = casesPerDay * 12;                 // bottles sold per day
    double dailyProfit = bottlesPerDay * profitPerBottle; // profit per day
    double yearlyProfit = dailyProfit * 365;              // profit per year

    // Correct decimal places for values
    cout << std::fixed;
    cout << std::setprecision(2);

    // Output results
    cout << "Bottles sold in a day: " << bottlesPerDay << endl;
    cout << "Daily profit: $" << dailyProfit << endl;
    cout << "Yearly profit: $" << yearlyProfit << endl;

    return 0;
}