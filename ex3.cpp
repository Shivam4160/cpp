#include<iostream>
using namespace std;
int fibonacci(int n)
{

    if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
    

}
int main()
{
    int n,i;
    cout<<"Enter the value of n:";
    cin>>n;

    cout<<"fibonacci serise "<<endl;
    for (i=1;i<=n; i++)
    {
        cout<<fibonacci(i)<<",";
    }
    

}