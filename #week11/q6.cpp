
#include <iostream>
using namespace std;

class BankAccount
{
    char name[50];
    int accountNumber;
    char accountType[20];
    float balance;

public:


    void assign()
    {
        cout << "Enter depositor name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type: ";
        cin >> accountType;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    
    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw amount
    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Function to display account details
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Depositor Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Available Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.assign();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}

