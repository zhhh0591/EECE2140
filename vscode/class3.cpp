#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

bool enterAmount(double& amount)
{
    while (true)
    {
        cout << "Enter amount: ";

        string input;
        if (!getline(cin, input))
            return false;

        istringstream stream(input);
        char extra;

        
        if ((stream >> amount) && !(stream >> extra)
            && isfinite(amount) && amount > 0)
        {
            return true;
        }

        cout << "Invalid amount. Please enter a positive number.\n";
    }
}

int main()
{
    const string CORRECT_CARD = "123456";
    const string CORRECT_PIN = "1234";

    string cardNumber;
    string password;
    double balance = 0.0;

    cout << "Welcome to the ATM!\n";

    cout << "Please enter your card number: ";
    if (!getline(cin, cardNumber))
        return 0;

    cout << "Please enter your PIN: ";
    if (!getline(cin, password))
        return 0;

    if (cardNumber != CORRECT_CARD || password != CORRECT_PIN)
    {
        cout << "Incorrect card number or PIN.\n";
        return 1;
    }

   
    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "\n[B] Balance  [D] Deposit  [W] Withdraw  [Q] Quit\n";
        cout << "Choose an action: ";

        string action;
        if (!getline(cin, action) || action == "q" || action == "Q")
            break;

        if (action == "b" || action == "B")
        {
            cout << "Your balance is: " << balance << '\n';
        }
        else if (action == "d" || action == "D"
                 || action == "w" || action == "W")
        {
            double amount = 0.0;

            // check then process to deposit or withdrawl
            if (!enterAmount(amount))
                break;

            if (action == "d" || action == "D")
            {
                if (!isfinite(balance + amount))
                {
                    cout << "Amount is too large.\n";
                    continue;
                }

                balance += amount;
                cout << "Deposit successful.\n";
            }
            else if (amount > balance)
            {
                cout << "Insufficient balance.\n";
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful.\n";
            }

            cout << "Your balance is: " << balance << '\n';
        }
        else
        {
            cout << "Invalid action. Please try again.\n";
        }
    }

    cout << "Thank you. Goodbye!\n";
    return 0;
}