#include <bits/stdc++.h>
using namespace std;

class Transaction
{
public:
    string type;
    double amount;
    string details;

    Transaction(string t, double a, string d)
    {
        type = t;
        amount = a;
        details = d;
    }

    void display()
    {
        cout << type << " : " << amount
             << " - " << details << endl;
    }
};

class Account
{
public:
    int accountNumber;
    double balance;
    vector<Transaction> transactions;

    Account(int number, double initialBalance)
    {
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount)
    {

        balance += amount;

        transactions.push_back(
            Transaction("Deposit", amount, "Money deposited"));

        cout << "Deposit successful!" << endl;
    }

    void withdraw(double amount)
    {

        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
            return;
        }

        balance -= amount;

        transactions.push_back(
            Transaction("Withdrawal", amount, "Money withdrawn"));

        cout << "Withdrawal successful!" << endl;
    }

    void transfer(Account &receiver, double amount)
    {

        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
            return;
        }

        balance -= amount;
        receiver.balance += amount;

        transactions.push_back(
            Transaction("Transfer", amount, "Money transferred"));

        receiver.transactions.push_back(
            Transaction("Transfer Received", amount,
                        "Money received"));

        cout << "Transfer successful!" << endl;
    }

    void showAccount()
    {

        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void showTransactions()
    {

        cout << "\nTransaction History:" << endl;

        if (transactions.empty())
        {
            cout << "No transactions found." << endl;
            return;
        }

        for (Transaction t : transactions)
        {
            t.display();
        }
    }
};

class Customer
{
public:
    string name;
    int customerId;
    Account account;

    Customer(string n, int id, int accountNumber,
             double initialBalance)
        : account(accountNumber, initialBalance)
    {

        name = n;
        customerId = id;
    }

    void showCustomer()
    {

        cout << "\nCustomer Name: " << name << endl;
        cout << "Customer ID: " << customerId << endl;

        account.showAccount();
    }
};

int main()
{

    Customer customer1("Rakib", 101, 1001, 5000);
    Customer customer2("Rahim", 102, 1002, 3000);

    customer1.showCustomer();
    customer2.showCustomer();

    cout << "\n--- Deposit ---" << endl;
    customer1.account.deposit(2000);

    cout << "\n--- Withdrawal ---" << endl;
    customer1.account.withdraw(1000);

    cout << "\n--- Fund Transfer ---" << endl;
    customer1.account.transfer(customer2.account, 1500);

    cout << "\n--- Updated Account Information ---" << endl;

    customer1.showCustomer();
    customer2.showCustomer();

    cout << "\n--- Customer 1 Transactions ---" << endl;
    customer1.account.showTransactions();

    cout << "\n--- Customer 2 Transactions ---" << endl;
    customer2.account.showTransactions();

    return 0;
}