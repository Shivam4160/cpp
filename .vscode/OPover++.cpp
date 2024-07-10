#include<iostream>
using namespace std;

class complex 
{
    int a;
    int b;
    public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display(){
        cout<<"value a is :"<<a<<endl;
        cout<<"value b is :"<<b<<endl;
    }
    complex operator+(complex x)
    {
        complex y;
        y.a=a+x.a;
        y.b=b+x.b;
        return y;
    }
    complex operator++()
    {
        complex z;
        z.a=a++;
        z.b=b++;

        return z;
    }
    complex operator--()
    {
        complex z;
        z.a=--a;
        z.b=--b;

        return z;
    }


};
      
int main()
{
    complex s1 ,s2 ,s3,s4,s5;
    s1=complex(3,6);
    s2=complex(2,4);
    cout<<"FIRST OBJECT"<<endl;
    s1.display();
    cout<<"SECOND OBJECT"<<endl;
    s2.display();
    cout<<"FINAL OBJECT"<<endl;
    s3=s1+s2;
    s3.display();
    cout<<"++ operator"<<endl;
    s4=++s3;
    s4.operator++();
    s4.display();
    cout<<"-- operator "<<endl;
    s5=--s3;
    s5.operator--();
    s5.display();
    


    return 0;
}