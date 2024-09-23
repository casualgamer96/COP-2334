/*
Goal: Use the switch case statement and perform input validation.

Assignment: You are programming a simple utility that identifies the
 meteorological season based on the calendar month and hemisphere entered by
  the user. The program asks for the hemisphere (N for North, S for South),
   asks for the month as a number (1 for January, 2 for February, etc.), and
    then displays the corresponding meteorological season.

Note: From now on, NH stands for Northern Hemisphere, and SH stands for
 Southern Hemisphere.

For this program, assume:
    Winter (NH), Summer (SH): Dec-Feb
    Spring (NH), Fall (SH): Mar-May
    Summer (NH), Winter (SH): Jun- Aug
    Fall (NH), Spring (SH): Sep-Nov

If the user enters an invalid hemisphere character, display the message
 "Please enter a valid hemisphere (N - S)." If the user enters a number less
  than 1 or greater than 12 for the month, display the message
   "Please enter a valid month number (1 - 12)."

** Sample Runs**: User input is in between square brackets.
    Enter a hemisphere (N - S): [N]
    Enter a month number (1 - 12): [3]
    The season is Spring.
    Enter a hemisphere (N - S): [n]
    Please enter a valid hemisphere (N - S).
    Enter a hemisphere (N - S): [S]
    Enter a month number (1 - 12): [13]
    Please enter a valid month number (1 - 12).
Note: For this exercise, you will need to write a complete C++ program that
 includes a main function, any needed libraries, etc.
*/
#include <iostream>
using namespace std;

int main()
{
    char hemisphere;
    int month;

    cout<<"Enter a hemisphere (N - S): ";
    cin>>hemisphere;

    switch(hemisphere)
    {
        case 'N':
            cout<<"Enter a month number (1 - 12): ";
            cin>>month;
            switch(month)
            {
                case 12:
                case 1:
                case 2:
                    cout<<"The season is Winter.\n";
                    break;
                case 3:
                case 4:
                case 5:
                    cout<<"The season is Spring.\n";
                    break;
                case 6:
                case 7:
                case 8:
                    cout<<"The season is Summer.\n";
                    break;
                case 9:
                case 10:
                case 11:
                    cout<<"The season is Fall.\n";
                    break;
                default:
                    cout<<"Please enter a valid month number (1 - 12).\n";
            }
            break;
        case 'S':
            cout<<"Enter a month number (1 - 12): ";
            cin>>month;
            switch(month)
            {
                case 12:
                case 1:
                case 2:
                    cout<<"The season is Summer.\n";
                    break;
                case 3:
                case 4:
                case 5:
                    cout<<"The season is Fall.\n";
                    break;
                case 6:
                case 7:
                case 8:
                    cout<<"The season is Winter.\n";
                    break;
                case 9:
                case 10:
                case 11:
                    cout<<"The season is Spring.\n";
                    break;
                default:
                    cout<<"Please enter a valid month number (1 - 12).\n";
            }
            break;
        default:
            cout<<"Please enter a valid hemisphere (N - S).\n";
    }
    return 0;
}
