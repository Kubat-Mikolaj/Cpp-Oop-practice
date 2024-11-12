/************************************************************************************************************

Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
Include member functions to deposit and withdraw money from the account.

************************************************************************************************************/

#include <iostream>
#include <string>

typedef enum
{
    DEPOSIT = 1,
    WITHDRAWAL = 2,
    CHECK_BALANCE = 3,
    EXIT = 4,
    IDLE = 5,
} operation;

class BankAccount
{
private:
    std::string AccountNumber;
    double Balance;

public:
    BankAccount(const std::string &AccNum, double InitBalan) : AccountNumber(AccNum), Balance(InitBalan) {}

    void deposit(double amount)
    {
        Balance += amount;
        std::cout << "Deposit successful. Current balance is: " << Balance << '\n';
    }

    void withdraw(double amount)
    {
        if (amount <= Balance)
        {
            Balance -= amount;
            std::cout << "Withdrawal successful. Current balance is: " << Balance << '\n';
        }
        else
        {
            std::cout << "Insufficient balance. Cannot withdraw: " << '\n';
        }
    }

    double getBalance() const
    {
        return Balance;
    }
};

int main()
{
    // Greeting
    std::cout << "Welcome to the bank!\n";
    std::cout << "Press any key to continue...\n";
    std::cin.get(); // Wait for a key press

    // Create a bank account object
    std::string bank = "SB-123";
    double Current_Balance = 1000;
    BankAccount account(bank, Current_Balance);
    
    int Current_Operation;

    do {
        std::cout << "Please select the operation: \n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Check Balance\n";
        std::cout << "4. Exit\n";
        std::cin >> Current_Operation;

        switch (Current_Operation)
        {
            case CHECK_BALANCE:
            {
                std::cout << "Operation selected - Check Balance\n";
                std::cout << "\nA/c No: " << bank << "\nBalance: " << account.getBalance() << '\n';
                break;
            }
            case DEPOSIT:
            {
                double deposit_amount;
                std::cout << "Enter deposit amount: ";
                std::cin >> deposit_amount;
                account.deposit(deposit_amount);
                break;
            }
            case WITHDRAWAL:
            {
                double withdrawal_amount;
                std::cout << "Enter withdrawal amount: ";
                std::cin >> withdrawal_amount;
                account.withdraw(withdrawal_amount);
                break;
            }
            case EXIT:
            {
                std::cout << "Exiting the program.\n";
                break;
            }
            default:
            {
                std::cout << "Invalid operation. Please try again.\n";
                break;
            }
        }
    } while (Current_Operation != EXIT);

    return 0;
}