// Topic: Structures
// Description: Functions

/*
This prgroam deplicits a bank account using structures and functions.
*/

#include <iostream>
#include <string>

using namespace std;

struct Account
{
    int accNo;
    string holderName;
    double balance;
};

Account readAccountData()
{
    Account acc;
    cout << "Input Account Number: ";
    cin >> acc.accNo;
    cout << "Input Holders Name: ";
    cin >> acc.holderName;
    cout << "Initial Balance: ";
    cin >> acc.balance;
    return acc;
}

void printAccountData(Account acc)
{
    cout<< "Account Details" << endl;
    cout << "-------------------------" << endl;
    cout << "Account Number: " << acc.accNo << endl;
    cout << "Holders Name: " << acc.holderName << endl;
    cout << "Balance: $" << acc.balance << endl;
}

bool accountDebit (Account& acc, double amount)
{
    bool success = false;

    if (acc.balance >= amount)
    {
        acc.balance -= amount;
        success = true;
    }

    return success;
}

void accountCredit(Account& acc, double amount)
{
    acc.balance +=  amount;
}


int main()
{
    Account a;
    a = readAccountData();
    printAccountData(a);

    cout << endl;
    cout << "Input debit amount: ";
    double amountDebit;
    cin >> amountDebit;

    bool success = accountDebit(a, amountDebit);

    if(success)
    {
        cout << "Account debited with $" << amountDebit << " successfully..." << endl;
        cout << "Current Balance: $" << a.balance << endl << endl;
    }
    else
    {
        cout << "Debit Unsuccessful, make sure that you have sufficient balance..." << endl << endl;
    }


    cout << "Input credit amount: ";
    double amountCredit;
    cin >> amountCredit;

    accountCredit(a, amountCredit);

    cout << "Account credited with $" << amountCredit << " successfully..." << endl;
    cout << "Current Balance: $" << a.balance << endl << endl;

    return 0;
}
