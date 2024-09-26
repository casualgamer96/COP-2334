/*5.5 question 1
Goal: Use a do-while loop to perform an input validation

Assignment: Imagine you are creating a basic interface for a library management
 system. The system should continuously prompt the user to choose an action
  until they decide to exit. The actions could be adding a book, searching for
  a book, or exiting the system. For simplicity, the user will input "A" to add
   a book, "S" to search, and "E" to exit.

Given a string variable choice that has been declared, write a code snippet that
 repeatedly reads a value from the console into choice. The program should
  continue prompting the user until "E" or "e" (for "Exit") is entered. If "A" or
   "a" is entered, print "Add Book\n". If "S" or "s" is entered, print
    "Search Book\n". For any other input, the program should ask for input again.

    Enter your choice (A/S/E): a
    Add Book
    Enter your choice (A/S/E): S
    Search Book
    Enter your choice (A/S/E): x
    Enter your choice (A/S/E): E
*/
#include <iostream>
using namespace std;

int main()
{
    string choice=" ";
    do
    {
       cout<<"Enter your choice (A/S/E): ";
        cin>>choice;
       if (choice=="a" || choice=="A")
        {
        cout<<"Add Book\n";
        }
       if (choice=="s" || choice=="S")
        {
            cout<<"Search Book\n";
        }           
    
    } while (choice!="e"&&choice!="E");
    return 0;
}