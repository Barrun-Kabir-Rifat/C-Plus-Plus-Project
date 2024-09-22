#include <bits/stdc++.h>
using namespace std;

class Bank
{
     private:
    string name_of_depositor;
    string account_name;
    int balance;
   public:
     Bank()
    {
        cout << "____Bank Project____" << endl;
        cout << "Enter Name of the depositor:" ;
        cin >> name_of_depositor;
        cout << "Enter Account number:" ;
        cin >> account_name;
        cout << "Enter Initial balance:";
        cin >> balance;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
    }
    void display()
    {
        cout << "Account details:" << endl;
        cout << "Name of Depositor:" << name_of_depositor << endl;
        cout << "Account name:" << account_name << endl;
        cout << "Balance:" << balance << endl;
    }
    void withdraw(int b)
    {
        if (b > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance = balance - b;
            cout << "Withdrawal amount=" << b << endl;
            cout << "Remaining balance=" << balance << endl;
        }
    }
};

int main()
{
    Bank objbank;
    level:
    system("cls");
    cout << "________Main Menu:________" << endl;
    cout << "1.Deposit Money" << endl;
    cout << "2.Withdraw money" << endl;
    cout << "3.Display Account Information" << endl;
    cout << "4.Exit" << endl;
    cout << "Choose an option:";
    int ch;
    cin >> ch;
    if (ch == 1)
    {
        int amount;
        cout << "Enter the amount of deposit:";
        cin >> amount;
        objbank.deposit(amount);
        system("pause");
        goto level;
    }
    else if(ch==2)
    {
        int wdraw;
        cout<<"Enter amount to withdraw:";
        cin>>wdraw;
        objbank.withdraw(wdraw);
        system("pause");
        goto level;
    }
    else if(ch==3)
    {
       objbank.display();
       system("pause");
       goto level;
    }
    else
    {
        cout<<"Thanks for being with us"<<endl;
        system("pause");
    }
    return 0;
}