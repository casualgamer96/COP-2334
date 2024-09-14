/*
A local pizza shop is selling a large pizza for $14.99. Given the number of
 pizzas to order as input, output the subtotal for the pizzas, and then output
 the total after applying a sales tax of 8%.

Output each floating-point value with two digits after the decimal point using
 the following statement once before all other cout statements:
    cout << fixed << setprecision(2);

Ex: If the input is: 3

the output is: Pizzas: 3
               Subtotal: $44.97
               Total due: $48.57
*/
// Includes needed for the program 
#include <iostream>
#include <iomanip>
using namespace std; // Setting the namespace to std for the whole program.

// Main part of the program.
int main()
{
    //Define and set up all needed variables
    const double SALES_TAX = .08; // 8% sales tax in decimal form (8/100).
    const double PRICE_OF_LARGE_PIZZA = 14.99; // The price of a large pizza.
    double subTotal,totalDue;
    int numberOfPizzas;

    // Get the number of pizzas.
    cout<<"How many large pizzas were ordered? ";
    cin>>numberOfPizzas;
    
    //Calculate the subtotal and total due.
    subTotal=PRICE_OF_LARGE_PIZZA*numberOfPizzas;
    totalDue=subTotal+(subTotal*SALES_TAX);

    //Display out put.
    cout << fixed << setprecision(2);
    cout<<"Pizzas: "<<numberOfPizzas<<endl;
    cout<<"Subtotal: $"<<subTotal<<endl;
    cout<<"Total due: $"<<totalDue<<endl;

    return 0;
}