#include<iostream>
using namespace std;

class bank
{
    public:
    int accno;
    char name[20];
    float balance;
    int pin;
    void create_account();
    void deposit();
    void withdraw();
    void check_balance();

    




};
void main_menu()
{

    cout<<"_____________________________________________________________________________________\n";
    cout<<"\t\t\t\tBANK INFO\n";
    cout<<"_____________________________________________________________________________________\n";
    cout<<"|\t\t\t\t1 "<<"create account                                     |\n";
    cout<<"_____________________________________________________________________________________\n";
    cout<<"|\t\t\t\t2 "<<"deposit money                                      |\n";
    cout<<"_____________________________________________________________________________________\n";
    cout<<"|\t\t\t\t3 "<<"withdraw money                                     |\n";
    cout<<"_____________________________________________________________________________________\n";
    cout<<"|\t\t\t\t4 "<<"check balance                                      |\n";
    cout<<"_____________________________________________________________________________________\n";
    cout<<"|\t\t\t\t5 "<<"exit                                               |\n";
    cout<<"_____________________________________________________________________________________\n";
    

}

void bank::create_account()
{
    cout<<"Enter Account Number: ";
    cin>>accno;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Balance: ";
    cin>>balance;
    cout<<"Enter Pin: ";
    cin>>pin;


    cout<<"Account has been successfully Created"<<endl;

}

void bank::deposit()
{
    int acno;
    cout<<"Enter Account Number: ";
    cin>>acno;
    redepo:
    if(accno==acno)
    {
        cout<<"Enter Amount to be Deposited: ";
        float amt;
        cin>>amt;
        balance=balance+amt;
        cout<<"Amount has been successfully deposited"<<endl;
    }
    else
    {
      
        cout<<"Account does not exist OR Account is incorrect"<<endl;
        cout<<"You have to Re-Enter your details"<<endl;
       
            goto redepo;
         

       
    }
    
}

void bank::withdraw()
{

    int acno;
    cout<<"Enter Account Number: ";
    cin>>acno;
    rewith:
    if(accno==acno)
    {
        cout<<"Enter Amount to be Withdrawn: ";
        float amt;
        cin>>amt;
        if(balance<amt)
        {
            cout<<"Insufficient Balance"<<endl;
            cout<<"You have to Re-Enter your details"<<endl;
            goto rewith;
        }
        else
        {
            balance=balance-amt;
        }
    }
    else
    {
        cout<<"Invalid Account Number"<<endl;
        cout<<"You have to Re-Enter your details"<<endl;
        goto rewith;

    }

}

void bank::check_balance()
{
    int acno;
    Re:
    cout<<"Enter Account Number: ";
    cin>>acno;
    if(accno==acno)
    {
        cout<<"Your Balance is: "<<balance<<endl;
    }
    else
    {
        cout<<"Invalid Account Number"<<endl;
        cout<<"You have to Re-Enter your details"<<endl;
        goto Re;

    }
    

}





int main()
{
    start:
    main_menu();
    cout<<"Enter number according to task you want to perform:"<<endl;

    int no;
    cin>>no;
    class bank acc;

    switch (no)
    {
        case 1:
            acc.create_account();
            goto start;
            break;
         case 2:
             acc.deposit();
             goto start;

            break;
        case 3:
            acc.withdraw();
            goto start;
             break;
        case 4:
             acc.check_balance();
             goto start;
            break;
        case 5:
        
        break;
    
    }



    
         
         
    return 0;
}