#include<iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    complex(int x, int y)
    {

        a=x;
        b=y;

    }
    void display()
    {
    
        cout<<"vlaue a is "<<a<<endl; 
        cout<<"vlaue b is "<<b<<endl; 

    }
    void operator-()
    {

        a=-a;
        b=-b;

    }
    
};



int main()
{

    complex s1(10,-50);
    s1.display();
    cout<<"after function call"<<endl;
    -s1;
    s1.display();
    

    return 0;
}