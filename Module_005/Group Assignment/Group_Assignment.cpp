#include <iostream>
using namespace std;

int main()
{
    double yearlyInterstRate; //interst rate given
    double monthlyInterestRate;// this is the montly rate
    double balance; // startingBalance
    double input;// holds inputs to then use for use later 
    int months; //time since account was established
      
  

    cout<<"Please enter the annual interest rate: "<<endl;
    cin>>yearlyInterstRate;
    monthlyInterestRate= yearlyInterstRate/12;
      
    cout<<"Please enter the starting balance: "<<endl;
    cin>>balance;
      
    cout<<"Please enter the number of months since the account was established: "<<endl;
    cin>>months;
    
    
    for (int i=1; i<months;i++)
    {
        
        // This first part find the amount deposited for the month then adds that to the balance
        cout<<"Please enter the amount deposited this month: "<<endl;
        cin>>input;
        while(!(input>0))
        {
            cout<<"Please enter a valid number "<<endl;
            cin>>input;
        }
        balance+=input;
        
        
        //This find the amount withdrawn and subtracts that from balance
        cout<<"Please enter the amount withdrawn this mont: "<<endl;
        cin>>input;
        while(!(input>0))
        {
            cout<<"Please enter a valid number "<<endl;
            cin>>input;
        }
        balance-=input;
        
        // this calculates the interest accumulated and adds it to balance
        balance+= balance*monthlyInterestRate;
        
        
    }
    
    return 0;
}
