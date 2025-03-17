// Project Overview
// Develop a simple banking system that demonstrates the concepts of polymorphism,            encapsulation, and inheritance. The system should allow users to create different types of bank accounts, perform transactions, and retrieve account information.

// Project Criteria:

    // Requirements:
        // - Class & Object
        // - Polymorphism
        // - Inheritance
        // - Encapsulation

    // Class Structure:

        // 1. Base Class: BankAccount
            // Attributes:
                // - accountNumber
                // - accountHolderName
                // - balance

            // Methods:
                // - deposit(amount: double). Adds funds to the account.
                // - withdraw(amount: double): Withdraws funds from the account.
                // - getBalance(); double: Returns the current balance.
                // - display AccountInfo(): Displays account details. 
                
        // 2. Derived Class: SavingsAccount (from BankAccount)
                
            // - Attribute: interest Rate
            // - Method: calculateInterest(): Calculates interest based on the balance and interest rate.
                
        // 3. Derived Class: CheckingAccount (from BankAccount)
                
            // - Attribute: overdraftLimit
            // - Method: checkOverdraft(): Checks if a withdrawal exceeds the overdraft limit.
                
        // 4. Derived Class: Fixed DepositAccount (from BankAccount)
                
            // - Attribute: term (duration in months)
            // - Method: calculatelnterest(): Calculates fixed deposit interest.
                
// Requirements:
                
    // 1. Create instances of different account types (savings, checking, fixed deposit).
                
    // 2. Demonstrate polymorphism by calling methods (e.g., calculateInterest()) through the base class pointer.
                
    // 3. Ensure encapsulation by making account balances private and providing appropriate accessors
                
    // 4 Implement transaction methods (deposit, withdraw) for each account type. 

    // 5. Create a user-friendly menu-driven interface for account management.


// #include <iostream>
// using namespace std;

// class BankAccount{

//     private :
//         int accountNumber;
//         string accountHolderName;
//         int accountBalance;

//     public :
//         BankAccount(int accountNumber, string accountHolderName, int accountBalance){
//             this->accountNumber = accountNumber;
//             this->accountHolderName = accountHolderName;
//             this->accountBalance = accountBalance;
//             cout << "Account Number : " << accountNumber << endl;
//             cout << "Account Holder`s Name : " <<  accountHolderName << endl;
//             cout << "Account Balance : " << accountBalance << endl; 
//         } 

// };

// class SavingsAccount : public BankAccount{

// };

// int main(){
//     BankAccount obj1(1409, "kartavya", 50000);
//     cout << endl;
//     BankAccount obj2(1499, "Krishn", 505044);


// }


#include <iostream>
using namespace std;

void deposit(float &balance) {
    float amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful. Your new balance is: " << balance << endl;
    } else {
        cout << "Amount must be greater than zero.\n";
    }
}

void withdraw(float &balance) {
    float amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful. Your new balance is: " << balance << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance.\n";
    } else {
        cout << "Amount must be greater than zero.\n";
    }
}

void checkBalance(float balance) {
    cout << "Your current balance is: " << balance << endl;
}


int main() {
    float balance = 0.0;
    int choice;

    while (true) {
        
        cout << "==== Simple Banking System ===\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                deposit(balance); 
                break;
            case 2:
            if (balance <= 0)
            {
                cout << endl;
               cout << "Bank Balence is 0" << endl << "deposit the amount first." << endl;
            }
            else
            {
                withdraw(balance); 
            }
                break;
            case 3:
            if (balance <= 0)
            {
                cout << endl;
               cout << "Bank Balence is 0" << endl << "deposit the amount first." << endl;
            }
            else
            {
                checkBalance(balance); 
            }
                break;
            case 4:
            cout << endl;
                cout << "Thank you for using the banking system! Goodbye." << endl;
                return 0; 
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}