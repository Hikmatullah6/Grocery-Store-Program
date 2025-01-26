/*
Hikmatullah Hussain Zada
Student number: 0761906
COIS 2040 Assignment 1
*/

// Libraries
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// Main program
int main()
{
    // Declaration of variables
    int casesPerDay;
    double profitPerBottle = 0.22;
    bool valid = false; // This variable is for the while loop to check user input

    // Run while loop until the user input is valid
    while (!valid)
    {
        // Ask user to input value for cases sold per day
        cout << "Enter the number of cases sold per day: ";
        cin >> casesPerDay;

        // Check if user input is valid
        if (casesPerDay >= 0 && cin.good())
        {
            // If valid, end loop
            valid = true;
        }
        else
        {
            // Tell the user the input is invalid
            cout << "Invalid input, please try again.\n";
            cin.clear();                                         // Reset the buffer's state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Empty it to avoid infinite loop
        }
    }

    // Declare and calculate values
    int bottlesPerDay = casesPerDay * 12;                 // bottles sold per day
    double dailyProfit = bottlesPerDay * profitPerBottle; // profit per day
    double yearlyProfit = dailyProfit * 365;              // profit per year
    double tenYearProfit = yearlyProfit * 10;             // profit over 10 years

    // Correct decimal places for values
    cout << std::fixed;
    cout << std::setprecision(2);

    // Output results
    cout << "Bottles sold in a day: " << bottlesPerDay << endl;
    cout << "Daily profit: $" << dailyProfit << endl;
    cout << "Yearly profit: $" << yearlyProfit << endl;
    cout << "Profit for 10 years: $" << tenYearProfit << endl;

    return 0;
}