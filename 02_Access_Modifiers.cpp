
#include <iostream>
using namespace std;

class BankAccount
{
private:
    // Task 1: balance is a private data member.
    double balance;

public:
    // Task 1: setBalance() and getBalance() are public member functions.

    void setBalance(double amount)
    {
        balance = amount;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount b1;

    // Task 2: Direct access to private balance is not allowed.
    // b1.balance = 5000; // This line causes a compilation error.

    // Task 4: Setter is used to modify private data.
    b1.setBalance(5000);

    // Task 4: Getter is used to access private data.
    cout << "Balance: " << b1.getBalance() << endl;

    // Task 3: The error occurs because balance is a private member.
    // Private members cannot be accessed directly from outside the class.

    return 0;
}
