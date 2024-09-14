/*
Question
Goal: Use cin, perform a basic mathematical operation, and display the result using stream manipulation.

Assignment: Write a program to calculate the area of a circle. The program will use the following formula:
A=pi*r^2

Where:

A is the area of the circle (in square meters);
r is the radius of the circle (in meters).
Assume 
 is equal to 3.14.

The program should prompt the user to enter the radius of the circle in meters.
 It will then calculate and display the area of the circle rounded to two decimal places.
 Ensure the number is not shown in scientific notation.

Sample run (user input between <>):

Enter the radius of the circle (m): <5>
The area of the circle is: 78.50 square meters

Note: You will need to write A complete C++ program, comprehensive of any inclusion preprocessor
 directives, namespace declaration, and the main function with its return. Use the sample run to
 determine which messages to display to the user.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14;
    double radius,area;

    cout<<"Enter the radius of the circle (m): ";
    cin>>radius;
    area=PI*pow(radius,2.0);
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The area of the circle is: "<<area<<" square meters"<<endl;

    return 0;
}
