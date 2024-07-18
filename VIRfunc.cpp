#include<iostream>
using namespace std;

class base
{
public:
    virtual void display()=0;

};
class derived:public base
{

    public:
    void display()
    {

        cout<<"programming is fun!!"<<endl;

    }

};



int main()
{

    base *p;
    derived a;
    p=&a;
    p->display();
         
         
    return 0;
}