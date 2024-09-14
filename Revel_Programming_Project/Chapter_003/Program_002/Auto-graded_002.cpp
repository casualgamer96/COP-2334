/*
Chapter 3 Auto-graded Programing Project 2
Question
Goal: Use mathematical functions, capture input from the user, and display the result of an operation.

Assignment: Write a program to calculate the area of a rectangle.
 The formula to calculate the area  of a rectangle is:
      Area=length*width

Your program should ask the user to input the length and width of the rectangle in meters and then
 calculate and display the area.

Sample Run (user input between <>):

Enter the length of the rectangle in meters: <5>
Enter the width of the rectangle in meters: <10>
The area of the rectangle is: 50 square meters.

Note: You must write A complete C++ program, comprehensive of any inclusion preprocessor directives,
 namespace declaration, and the main function with its return. Use the sample run to determine which
 messages to display to the user.

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double area,length,width;
    
    cout<<"Enter the length of the rectangle in meters: ";
    cin>>length;
    cout<<endl;
    cout<<"Enter the width of the rectangle in meters: ";
    cin>>width;
    cout<<endl;
    area = length * width;
    
    cout<<"The area of the rectangle is: "<<area<<" square meters."<<endl;
    
    return 0;
}

