#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
    string owner;
    double balance;

    public:
    void openAccount(string name,double initial)
    {
        owner = name;
        if (initial>0)
        
            balance = initial;
        else
           
            balance = 0;
        
    }

    void deposite(double amount)
    {
        if(amount>0)
        {
            balance = balance + amount;
        }
    }
    bool withdraw(double amount)
    {
        if(amount >0 && amount <= balance)
        {
            balance = balance - amount;
            return true;
        }
        return false;
    }

    string getowner()
    {
        return owner;
    }
    double getbalance()
    {
        return balance;
    }
};
 int main()
 {
    BankAccount account;
    string name;
    double initialDeposit;
    double depositAmount;
    double withdrawal;

    cout<< "Enter account holder name: ";
    getline(cin , name);

    cout << "Enter initial deposit : ";
    cin>> initialDeposit;

    account.openAccount(name, initialDeposit);

    cout<< "Enter amount to deposit: ";
    cin>> depositAmount;
    account.deposite(depositAmount);

    cout << "\n Enter valid withdrawal amount: ";
    cin >> withdrawal;

    if(account.withdraw(withdrawal))
{
    cout << "withdrawal successful." << endl;
}
else
{
    cout <<"withdrawal failed." <<endl;
}
cout <<"\n==== Account Details ====" << endl;
cout <<"Account holder: " << account.getowner()<< endl;
cout<<" Final balance: "<< account.getbalance() <<endl;

return 0;
 }



 
    


    

  

