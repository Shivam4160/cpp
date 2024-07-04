#include<iostream>
using namespace std;
int main()
{

    for (int i = 65; i <= 90; i++)
    {
        
        for (int j = i; j <= i; j++)
        {
            cout<<char(i)<<"-"<<char (j+32);
        }
        
        cout<<endl;

    }
    

}