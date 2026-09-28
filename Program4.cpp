#include <iostream>
using namespace std;

// Base Account class
class Account
{
protected:
    int accountNumber;
    string holderName;
    double balance;

public:
    // Constructor
    Account(int number, string name, double bal)
    {
        accountNumber = number;
        holderName = name;
        balance = bal;
    }

    // Deposit money
    void deposit(double amount)
    {
        balance = balance + amount;
    }

    // Virtual withdrawal function
    virtual void withdraw(double amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient balance" << endl;
    }

    // Virtual interest function
    virtual void calculateInterest()
    {
        cout << "General account interest" << endl;
    }

    // Display account details
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

// Savings Account
class SavingsAccount : public Account
{
public:
    SavingsAccount(int n, string name, double b)
        : Account(n, name, b) {}

    void calculateInterest() override
    {
        double interest = balance * 0.04;
        cout << "Savings Interest: Rs. " << interest << endl;
    }
};

// Current Account
class CurrentAccount : public Account
{
public:
    CurrentAccount(int n, string name, double b)
        : Account(n, name, b) {}

    void calculateInterest() override
    {
        cout << "Current Account Interest: No interest" << endl;
    }
};

// Fixed Deposit Account
class FixedDepositAccount : public Account
{
public:
    FixedDepositAccount(int n, string name, double b)
        : Account(n, name, b) {}

    void calculateInterest() override
    {
        double interest = balance * 0.07;
        cout << "Fixed Deposit Interest: Rs. " << interest << endl;
    }
};

int main()
{
    SavingsAccount savings(101, "Rahul", 10000);

    savings.deposit(2000);
    savings.withdraw(1000);
    savings.display();
    savings.calculateInterest();

    cout << endl;

    CurrentAccount current(102, "Amit", 20000);
    current.display();
    current.calculateInterest();

    cout << endl;

    FixedDepositAccount fd(103, "Sneha", 50000);
    fd.display();
    fd.calculateInterest();

    return 0;
}
