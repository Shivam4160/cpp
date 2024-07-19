#include<iostream>
using namespace std;
         
class base
{
    private:
        int a=10;
    protected:
        int b=20;
    public:
        int c=30;

    void printa()
    {

        cout<<a<<endl;

    }
    

};


class derived: public base
{

    public:

    void print()
    {

        cout<<b<<endl;
        cout<<c;

    }


};

int main()
{
       derived  obj;
       obj.printa();
       obj.print();
         
         
    return 0;
}