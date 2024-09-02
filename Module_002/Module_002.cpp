/*
    Module 02 - Assignment
    Create a C++ program using any web-based IDE or other compiler to meet the given requirements:

    Suppose an employee gets paid every two weeks and earns $2,200 each pay period. In a year, the employee gets paid 26 times. Write a program that defines the following variables:

    payAmount	This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0.

    payPeriods	This variable will hold the number of pay periods in a year. Initialize the variable with 26.

    annualPay		This variable will hold the employee's total annual pay, which will be calculated.

    The program should calculate the employee's total annual pay by multiplying the employee's pay amount by the number of pay periods in a year and store the result in the annualPay variable. Display the total annual pay on the screen.
*/
// Program initiation.
#include <iostream>

// Main program loop for displaying information.
int main()
{
    // Declaring and setting up required variables.
    double payAmount = 2200.0;// This is the employees pay for each pay period. 
    int payPeriods = 26;      // The number of pay periods in a year when 52 weeks is divided by 2.
    double annualPay = 0.0;   // Where to store the annual pay for the employee.

    // Calculate the annual pay for the employee.
    annualPay = payAmount * payPeriods;

    // Print out the calculated annual pay for the employee.
    std::cout << "The employees annual pay is " << annualPay ;

    return 0;
}