
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(string number, string holder, double initialBalance) {
        accountNumber = number;
        accountHolder = holder;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void displayAccountInformation() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    BankAccount a1("1001", "Rahim", 5000);
    BankAccount a2("1002", "Karim", 8000);

    cout << "First Account:" << endl;
    a1.deposit(2000);
    a1.withdraw(1000);
    a1.displayAccountInformation();

    cout << "Second Account:" << endl;
    a2.deposit(1500);
    a2.withdraw(12000);
    a2.displayAccountInformation();

    return 0;
}
