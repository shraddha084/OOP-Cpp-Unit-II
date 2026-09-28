#include <iostream>              // Used for input and output
using namespace std;             // Allows us to use cout directly

// Abstract class representing the common payment interface
class Payment
{
public:
    // Pure virtual function
    virtual void processPayment(double amount) = 0;
};

// Credit Card payment class
class CreditCard : public Payment
{
public:
    // Implement processPayment function
    void processPayment(double amount) override
    {
        cout << "Credit Card Payment: Rs. " << amount << endl;
    }
};

// UPI payment class
class UPI : public Payment
{
public:
    // Implement processPayment function
    void processPayment(double amount) override
    {
        cout << "UPI Payment: Rs. " << amount << endl;
    }
};

// Net Banking payment class
class NetBanking : public Payment
{
public:
    // Implement processPayment function
    void processPayment(double amount) override
    {
        cout << "Net Banking Payment: Rs. " << amount << endl;
    }
};

// Wallet payment class
class Wallet : public Payment
{
public:
    // Implement processPayment function
    void processPayment(double amount) override
    {
        cout << "Wallet Payment: Rs. " << amount << endl;
    }
};

// Main function
int main()
{
    // Create objects of different payment modes
    CreditCard card;
    UPI upi;
    NetBanking netBanking;
    Wallet wallet;

    // Process credit card payment
    card.processPayment(500);

    // Process UPI payment
    upi.processPayment(750);

    // Process net banking payment
    netBanking.processPayment(1000);

    // Process wallet payment
    wallet.processPayment(300);

    return 0;                    // End the program
}
