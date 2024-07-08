#include<iostream>
using namespace std;

class volume
{
private:
    
public:
    volume( int a)
    {

       
        float cube;
        cube=a*a*a;
        cout<<"volume of cube is"<<":"<<cube<<endl;


    }
    volume(int r, int h)
    {

        
        float cone;
        cone= 3.14*r*r*h/3;
        cout<<"voume of cone is"<<":"<<cone<<endl;


    }
    volume(int l,int b,int h)
    {

       
        float cuboid;
        cuboid=l*b*h;
        cout<<"volume of cuboid is"<<":"<<cuboid<<endl;


    }
    volume(float r)
    {

        float sphere;
        sphere=(4/3)*3.14*r*r*r;
        cout<<"volume of sphere is"<<":"<<sphere<<endl;


    }
    

};

int main()
{

    int n;

    printf("cube\tcone\tcuboid\tsphere\n");
    printf("1\t2\t3\t4\n");
    printf("enter the number according to the shape of object you want to find volume:");
    scanf("%d",&n);

    if (n==1)
    {
        
    }
    

    return 0;
}

