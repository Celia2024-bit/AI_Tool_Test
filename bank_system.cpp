#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;
public:
    BankAccount(string owner, double balance) {
        this->owner = owner;
        this->balance = balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void display() {
        cout << "Owner: " << owner << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);

    account.display();

    account.deposit(500.0);
    account.display();

    if (account.withdraw(300.0)) {
        cout << "Withdraw successful" << endl;
    } else {
        cout << "Withdraw failed" << endl;
    }
    account.display();

    if (account.withdraw(1500.0)) {
        cout << "Withdraw successful" << endl;
    } else {
        cout << "Withdraw failed" << endl;
    }
    account.display();

    return 0;
}
