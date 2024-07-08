#include<iostream> 
using namespace std; 
 
class volumes 
{ 

    public: 
        int volume(int a)
        { 
        

            float cube; 
            cube=a*a*a; 
            cout<<"volume of cube is"<<":"<<cube<<endl; 
    
    
        } 
        void volume(int r, int h) 
        { 
        

            float cone; 
            cone= 3.14*r*r*h/3; 
            cout<<"voume of cone is"<<":"<<cone<<endl; 
    
    
        } 
        void volume(int l,int b,int h) 
        { 
        

            float cuboid; 
            cuboid=l*b*h; 
            cout<<"volume of cuboid is"<<":"<<cuboid<<endl; 
    
    
        } 
        void volume(float r) 
        { 
        
            float sphere; 
            sphere=(4/3)*3.14*r*r*r; 
            cout<<"volume of sphere is"<<":"<<sphere<<endl; 
    
    
        } 

    
}; 
 
int main() 
{ 
 
    int n,r,a,h,H,b,l;
    float R;

    start:

    cout<<"cube\tcone\tcuboid\tsphere"<<endl; 
    cout<<"1\t2\t3\t4"<<endl;
    cout<<"enter the number according to the shape of object you want to find volume:"; 
    cin>>n;
 
        volumes vol;
    if (n==1) 
    { 
        cout<<"Enter length of cube";
        cin>>a; 
        vol.volume(a);

    }
    else if (n==2)
    {
        
        cout<<"Enter radius of cone";
        cin>>r; 
        cout<<"Enter the hight cone";
        cin>>h; 
        vol.volume(r,h);

    }
    else if (n==3)
    {

        cout<<"Enter the length of cuboid";
        cin>>l; 
        cout<<"Enter the height of cuboid";
        cin>>H; 
        cout<<"Enter the base of cuboid";
        cin>>b; 
        vol.volume(l,H,b);


    }
    else if (n==4)
    {
        cout<<"Enter radius of sphere";
        cin>>R; 
        vol.volume(R);
    }
    else
    {
        cout<<"***************************************************************************************"<<endl;
        cout<<"please Re-enter the number"<<endl;
        goto start;

    }
    
      
 
    return 0; 
}