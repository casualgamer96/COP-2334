/*
Bank Charges
A bank charges $10 per month plus the following check fees for a commercial
checking account:
$.10 each for fewer than 20 checks
$.08 each for 20-39 checks
$.06 each for 40-59 checks
$.04 each for 60 or more checks

The bank also charges an extra $15 if the balance of the account falls below
$400 (before any check fees are applied). Write a program that asks for the
beginning balance and the number of checks written. Compute and display the
bank's service fees for the month.

Input Validation: Do not accept a negative value for the number of checks
written. If a negative value is given for the beginning balance, display an urgent
message indicating the account is overdrawn.
*/
// Includes needed for the program 
#include <iostream>
#include <iomanip>
using namespace std; // Setting the namespace to std for the whole program.

// Main part of the program.
int main()
{
    //Declaring the variables.
    const double BASE_CHARGES = 10.00;
    const double MIN_BALANCE= 400.00;
    const double BELOW_MIN_CHARGE = 15.00;
    const double CHECK_COUNT_UNDER_20 = 0.10;
    const double CHECK_COUNT_20_39 = 0.08;
    const double CHECK_COUNT_40_59 = 0.06;
    const double CHECK_COUNT_60_PLUS = 0.04;
    double accountBalance;
    double newCharges;
    int numberOfChecks;

    // Get the beginning balance and the number of checks
    cout<<"What is the beginning balance? ";
    cin>>accountBalance;
    if (accountBalance<0)//If the account is over drawn display message and exit.
    {
        cout<<"\nACCOUNT IS OVERDRAWN!\n";
    }
    else
    {
        cout<<"How many checks used? ";
        cin>>numberOfChecks;
        //make sure the check count is zero or more if not display message and quit.
        if (numberOfChecks<0)
        {
            cout<<"\nCheck count can not be less than zero.\n";
        }
        else
        {
            //Check to see if the account is below the minimum balance and add proper fees.
            if (accountBalance<MIN_BALANCE)
            {
                newCharges=BASE_CHARGES+BELOW_MIN_CHARGE;
            }
            else
            {
                newCharges=BASE_CHARGES;
            }
            //Add the proper check fees based on the number of checks.
            if (numberOfChecks>=60)//check count 60 or more
            {
                newCharges=newCharges+CHECK_COUNT_60_PLUS*numberOfChecks;
            }
            else if (numberOfChecks>=40)//check count 40-59
            {
                newCharges=newCharges+CHECK_COUNT_40_59*numberOfChecks;
            }
            else if (numberOfChecks>=20)//check count 20-39
            {
                newCharges=newCharges+CHECK_COUNT_20_39*numberOfChecks;
            }
            else//check count 19 or less
            {
                newCharges=newCharges+CHECK_COUNT_UNDER_20*numberOfChecks;
            }
            cout<<setprecision(2)<<fixed;
            cout<<"Total charges for the month: $"<<newCharges<<endl;
        }
    }
    return 0;    
}