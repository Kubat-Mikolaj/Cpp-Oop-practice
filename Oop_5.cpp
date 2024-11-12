/************************************************************************************************************

Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
Include member functions to deposit and withdraw money from the account.

************************************************************************************************************/

#include <iostream>
#include <string>

class BankAccount
{
    private:
    std::string AccountNumber;
    double Balance;

    public:
    BankAccount(const std::string & AccNum, double InitBalan): AccountNumber(AccNum), Balance(InitBalan){}

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

    protected:
};

int main()
{
    // Create a bank account object
    std::string bank = "SB-123";
    double Current_Balance, deposit_amount, withdrawal_amount;

    Current_Balance = 1000;
    BankAccount account(bank, Current_Balance);
    std::cout << "\nA/c. No. " << bank << "\nBalance: " << Current_Balance << '\n';

    deposit_amount = 500;
    std::cout << "Deposit Amount: " << deposit_amount << '\n';
    account.deposit(deposit_amount);
    

    withdrawal_amount = 200;
    std::cout << "Withdrawal Amount: " << withdrawal_amount << '\n';
    account.withdraw(withdrawal_amount);
    


    return 0;


}