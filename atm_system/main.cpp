// main.cpp
#include <iostream>
#include "atm.h"

using namespace std;

int main() {
    ATM atm;
    string username, password;
    int choice;
    float amount;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (!atm.login(username, password)) {
        return 1;
    }

    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter withdraw amount: ";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
