#include <iostream>
using namespace std;

class bank
{
public:
    int accno;
    char name[20];
    float balance;
    int pin;
    void create_account();
    int deposit();
    int withdraw();
    int check_balance();
};
void main_menu()
{

    cout << "_____________________________________________________________________________________\n";
    cout << "\t\t\t\tBANK INFO\n";
    cout << "_____________________________________________________________________________________\n";
    cout << "|\t\t\t\t1 " << "create account                                     |\n";
    cout << "_____________________________________________________________________________________\n";
    cout << "|\t\t\t\t2 " << "deposit money                                      |\n";
    cout << "_____________________________________________________________________________________\n";
    cout << "|\t\t\t\t3 " << "withdraw money                                     |\n";
    cout << "_____________________________________________________________________________________\n";
    cout << "|\t\t\t\t4 " << "check balance                                      |\n";
    cout << "_____________________________________________________________________________________\n";
    cout << "|\t\t\t\t5 " << "exit                                               |\n";
    cout << "_____________________________________________________________________________________\n";
}

void bank::create_account()
{
    cout << "Enter Account Number: ";
    cin >> accno;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Balance: ";
    cin >> balance;
    cout << "Enter Pin: ";
    cin >> pin;

    cout << "Account has been successfully Created" << endl;
}

int bank::deposit()
{
    int acno;

    cout << "Enter Account Number: ";
    cin >> acno;
    if (accno == acno)
    {
        cout << "Enter Amount to be Deposited: ";
        float amt;
        cin >> amt;
        balance = balance + amt;
        cout << "Amount has been successfully deposited" << endl;
    }
    else
    {

        cout << "\n";
        cout << "\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "*************************************************************************************\n";
        cout << "\t\tAccount does not exist OR Account NO. is incorrect" << endl;
        cout << "*************************************************************************************\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "\n";
        cout << "\n";
        int n;
        cout << "Enter 1 if you want to create Account or other NO. to Repeat";
        cin >> n;

        return n;
    }
}

int bank::withdraw()
{
rewith:
    int acno;
    cout << "Enter Account Number: ";
    cin >> acno;

    if (accno == acno)
    {
        cout << "Enter Amount to be Withdrawn: ";
        float amt;
        cin >> amt;
        if (balance < amt)
        {
            cout << "\n";
            cout << "\n";
            cout << "_____________________________________________________________________________________\n";
            cout << "*************************************************************************************\n";
            cout << "\t\t\t\tInsufficient Balance" << endl;
            cout << "\t\t\tYou have to Re-Enter your details" << endl;
            cout << "*************************************************************************************\n";
            cout << "_____________________________________________________________________________________\n";
            cout << "\n";
            cout << "\n";
            goto rewith;
        }
        else
        {
            balance = balance - amt;
        }
    }
    else
    {
        cout << "\n";
        cout << "\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "*************************************************************************************\n";
        cout << "\t\tAccount does not exist OR Account NO. is incorrect" << endl;
        cout << "*************************************************************************************\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "\n";
        cout << "\n";

        int n;
        cout << "Enter 1 if you want to create Account or other NO. to Repeat";
        cin >> n;

        return n;
    }
}

int bank::check_balance()
{
    int acno;
Re:
    cout << "Enter Account Number: ";
    cin >> acno;
    if (accno == acno)
    {
        cout << "Your Balance is: " << balance << endl;
    }
    else
    {
        cout << "\n";
        cout << "\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "*************************************************************************************\n";
        cout << "\t\tAccount does not exist OR Account NO. is incorrect" << endl;
        cout << "*************************************************************************************\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "\n";
        cout << "\n";

        int n;
        cout << "Enter 1 if you want to create Account or other NO. to Repeat";
        cin >> n;

        return n;
    }
}

int main()
{
start:
    main_menu();
    cout << "Enter number according to task you want to perform:" << endl;

    int no, n;
    cin >> no;
    class bank acc;
    if (no < 6 && no > 0)
    {
        switch (no)
        {
        case 1:

        create_acc:
            acc.create_account();
            cout << "\n";
            cout << "\n";
            goto start;
            break;

        case 2:
        deposit:
            acc.deposit();
            cout << "\n";
            cout << "\n";

            n = acc.deposit();
            if (n == 1)
            {
                cout << "\n\n\tCreate Account\n\n";
                goto create_acc;
            }
            else if (n == 0)
            {
                goto deposit;
            }
            goto start;
            break;

        case 3:
        withdraw:
            acc.withdraw();
            cout << "\n";
            cout << "\n";

            n = acc.withdraw();

            if (n == 1)
            {
                cout << "\n\n\tCreate Account\n\n";
                goto create_acc;
            }
            else if (n == 0)
            {
                goto withdraw;
            }
            goto start;
            break;

        case 4:
        check_balance:
            acc.check_balance();
            cout << "\n";
            cout << "\n";

            n = acc.check_balance();

            if (n == 1)
            {
                cout << "\n\n\tCreate Account\n\n";
                goto create_acc;
            }
            else if (n == 0)
            {
                goto check_balance;
            }
            goto start;
            break;

        case 5:

            break;
        }
    }
    else
    {

        cout << "\n";
        cout << "\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "*************************************************************************************\n";
        cout << "\t\t\t\tInvalid Task\n\t\tPLEASE ENTER YOUR TASK NUMBER AGAIN" << endl;
        cout << "*************************************************************************************\n";
        cout << "_____________________________________________________________________________________\n";
        cout << "\n";
        cout << "\n";

        goto start;
    }

    return 0;
}