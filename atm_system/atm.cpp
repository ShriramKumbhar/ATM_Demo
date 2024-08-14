// atm.cpp
#include "atm.h"
#include <iostream>

using namespace std;

ATM::ATM() : username("user"), password("pass"), balance(1000.0) {} // Default user credentials and balance

bool ATM::login(const string& username, const string& password) {
    if (authenticateUser(username, password)) {
        displayMenu();
        return true;
    }
    cout << "Invalid credentials!" << endl;
    return false;
}

void ATM::checkBalance() const {
    cout << "Current balance: $" << balance << endl;
}

void ATM::deposit(float amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

void ATM::withdraw(float amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
    } else {
        cout << "Invalid withdraw amount or insufficient funds!" << endl;
    }
}

void ATM::displayMenu() const {
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

bool ATM::authenticateUser(const string& username, const string& password) const {
    return (username == this->username && password == this->password);
}
