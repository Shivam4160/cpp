#include<iostream>
using namespace std;

int main()
{

    int phy,chem,maths,total;
    float per;

    cout<<"Enter the marks of physics"; 
    cin>>phy;
    cout<<"Enter the marks of chemistry"; 
    cin>>chem;
    cout<<"Enter the marks of maths"; 
    cin>>maths;
    total = phy + chem + maths;
    per = total/3.0;

    cout<<total<<endl;
    cout<<per<<endl;


    return 0;
}