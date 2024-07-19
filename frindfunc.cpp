#include<iostream>
using namespace std;

int N;

class largest
{


   
public:

    friend int largestnum(largest);

    void getnumber(int num[])
    {
         


        for (int i = 0; i <= N-1; i++)
        {

            cout<<"enter the number"<<i+1<<":"<<endl;
            cin>>num[i];


        }
        

    }

    


};



int largestnum(int num[])
{
    
    int a=0;
    for (int j = 0; j <=N-1; j++)
    {

        if(a<num[j])
        a=num[j];

    }
    
    return a;
}

         
int main()
{
    cout<<"Enter the total numbers:"<<endl;
    cin>>N;

    int num[N];
    
    largest big; 
        big.getnumber(num);

    cout<<"thr largesdt number is :"<< largestnum(num)<<endl;
       
         
    return 0;
}