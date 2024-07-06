#include<iostream>
using namespace std;

class volume
{
private:
    
public:
    volume()
    {

        int a;
        float cube;
        cube=a*a*a;
        cout<<"volume of cube is"<<":"<<cube<<endl;


    }
    volume(int r, int h)
    {

        
        float cone;
        cone= 3.14*r*r*h/3;
        cout<<"voume of cube is"<<":"<<cone<<endl;


    }
    volume(int a)
    {

        int l,b,h;
        float cuboid;
        cuboid=l*b*h;
        cout<<"volume of cuboid is"<<":"<<cuboid<<endl;


    }
    volume()
    {

        int a,volume;
        volume=a*a*a;
        cout<<"volume of cube is"<<":"<<volume<<endl;


    }
    volume()
    {

        int a,volume;
        volume=a*a*a;
        cout<<"volume of cube is"<<":"<<volume<<endl;


    }

};
