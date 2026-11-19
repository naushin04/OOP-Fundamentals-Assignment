
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) {
        balance = amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount b1;

    b1.setBalance(5000);

    cout << "Balance: " << b1.getBalance() << endl;

    return 0;
}
