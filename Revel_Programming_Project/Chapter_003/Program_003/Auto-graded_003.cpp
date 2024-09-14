/*
Chapter 3 Auto-graded Programing Project 3
Question
Goal: Utilizing variables and data types to store user inputs. Implementing
 input/output operations for interaction with the user. Using string
 concatenation and formatting.

Assignment: You are developing a program for a virtual event planning service.
 The program will ask users to input details about an event they are planning
 and then output a summarized plan based on their input.

The user should provide the following inputs

Their name.
The type of event they are planning (e.g., birthday party, wedding, conference).
The location of the event.
The number of guests expected.
The main theme or color scheme of the event.
The name of a key guest or speaker.

After collecting the inputs, the program should create an event summary. Note
 that some of the input might contain multiple words, so retrieve them
 accordingly. The summary should include all the user's inputs, formatted
 coherently and readable.

Sample Run

Please enter your name:
[name]
Please enter the type of event you are planning:
[event type]
Please enter the location of the event:
[location]
Please enter the number of guests expected:
615
Please enter the main theme or color scheme of the event:
[theme]
Please enter the name of a key guest or speaker.
[guest]

Hello [name]!
Your [event type] is all set to happen at [location].
You can expect around [number of guests] guests to join the celebration. 
The event will be adorned with a [theme] theme, making it a memorable day. 
Special guest [guest] will be the highlight of the event. 
We are looking forward to helping you make your event successful!
Note: You must write A complete C++ program, comprehensive of any inclusion
 preprocessor directives, namespace declaration, and the main function with its
 return. Use the sample run to determine which messages to display to the user.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name,eventType,location,theme,guest;
    int numberOfGuests;
    
    cout<<"Please enter your name:\n";
    getline(cin,name);
    cout<<"Please enter the type of event you are planning:\n";
    getline(cin,eventType);
    cout<<"Please enter the location of the event:\n";
    getline(cin,location);
    cout<<"Please enter the main theme or color scheme of the event:\n";
    getline(cin,theme);
    cout<<"Please enter the name of a key guest or speaker.\n";
    getline(cin,guest);
    cout<<"Please enter the number of guests expected:\n";
    cin>>numberOfGuests;

    cout<<"Hello "<<name<<"!\n";
    cout<<"Your "<<eventType<<" is all set to happen at "<<location<<".\n";
    cout<<"You can expect around "<<numberOfGuests<<" guests to join the celebration.\n";
    cout<<"The event will be adorned with a "<<theme<<" theme, making it a memorable day.\n";
    cout<<"Special guest "<<guest<<" will be the highlight of the event.\n";
    cout<<"We are looking forward to helping you make your event successful!\n";

    return 0;
}

