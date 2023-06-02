#include <bits/stdc++.h>
using namespace std;

class bank
{
private:
    int age;
    int balance;
    string name;
    char password[20];
    int account_no;

public:
    static int a;

    void newacc(int);
    void closeacc(void);
    void deposit(void);
    void withdraw(void);
    void checkbalance(void);

    int search(int);
};

void bank ::newacc(int t)
{
    account_no = t + 1;
    cout << endl
         << "\tWelcome to ####Bank" << endl
         << endl;
    cout << "Enter Your Name : " << endl;
    cin >> name;
    cout << "Enter Your Age : " << endl;
    cin >> age;
    cout << "Enter Your Password : " << endl;
    cin >> password;
    balance = 500;
    cout << "Current Balance is : " << balance << endl;
    cout << "Your account number is: " << account_no << endl;
    cout << "Congratulations " << name << "!" << endl;
    cout << "Account Activation Successful !" << endl;
}

void bank::deposit(void)
{
    int amount;
    cout << "Enter amount to deposit: " << endl;
    cin >> amount;
    balance = balance + amount;
    cout << "Availabe balance = " << balance << endl;
}

void bank ::withdraw(void)
{
    int amount;
    cout << "Enter Amount to withdraw: " << endl;
    cin >> amount;
    if (amount <= balance)
    {
        balance = balance - amount;
        cout << "Current balance : " << balance << endl;
    }

    else
    {
        cout << "Invalid Balance" << endl;
    }
}

void bank ::checkbalance(void)
{
    cout << "Available balance is : " << balance << endl;
}

int bank::search(int a)
{
    if (account_no == a)
    {
        cout << "Account Number: " << account_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        return 1;
    }
    return 0;
}

int main()
{
    int n, found, provided_acc = 0;
    int count, a, i, incr = 0;
    float money;
    cout << "Enter how many account you want to operate?" << endl;
    cin >> n;
    bank p[n];
    for (;;)
    {
        cout << endl
             << endl
             << "******Main Menu<<******" << endl
             << endl;
        cout
            << "1. Open New Account" << endl;
        cout << "2. Close Old Account" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Check Balance" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your option(1-6):_" << endl;
        cin >> count;

        switch (count)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                p[i].newacc(provided_acc);
                provided_acc = provided_acc + 1;
            }
            break;
        case 2:
            cout << "Input your account number: " << endl;
            cin >> a;
            for (i = 0; i < n; i++)
            {
                found = p[i].search(a);
                if (found)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        p[j] = p[j + 1];
                    }
                    i = i - 1;
                    n = n - 1;
                    incr = 1;
                }
            }
            if (incr > 0)
            {
                cout << "Account Deleted Successfully." << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }

            break;

        case 3:
            cout << "Enter account number to search: " << endl;
            cin >> a;
            for (i = 0; i < n; i++)
            {
                found = p[i].search(a);
                if (found)
                {
                    p[i].deposit();
                    break;
                }
                if (!found)
                {
                    cout << "Invalid information" << endl;
                }
                break;
            }
            break;

        case 4:
            cout << "Account Number : " << endl;
            cin >> a;
            for (int i = 0; i < n; i++)
            {
                found = p[i].search(a);
                if (found)
                {
                    p[i].withdraw();
                    break;
                }
            }
            if (!found)
                cout << "Invalid information" << endl;
            break;
        case 5:
            cout << "Enter Account Number: " << endl;
            cin >> a;
            for (int i = 0; i < n; i++)
            {
                found = p[i].search(a);
                if (found)
                {
                    p[i].checkbalance();
                }
                break;
            }
            if (!found)
                cout << "Invalid information" << endl;
            break;

        case 6:
            break;
        }
        if (count == 6)
        {
            break;
        }
    }
    return 0;
}
