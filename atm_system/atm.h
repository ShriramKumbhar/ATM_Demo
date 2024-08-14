// atm.h
#ifndef ATM_H
#define ATM_H

#include <string>

using namespace std;

class ATM {
public:
    ATM();
    bool login(const string& username, const string& password);
    void checkBalance() const;
    void deposit(float amount);
    void withdraw(float amount);

private:
    string username;
    string password;
    float balance;

    void displayMenu() const;
    bool authenticateUser(const string& username, const string& password) const;
};

#endif
