#include<iostream> 
using namespace std; 
class area 
{ 
 
public: 
area() 
{ 
    int h,b; 
    float area1; 
 
    cout<<"Enter height of triangle:";
    cin>>h; 
    cout<<"Enter base of triangle:"; 
    cin>>b; 

    area1=0.5*h*b; 
 
    cout<<"Area of triangle="<<area1<<endl; 

}   

    ~area()
    {

        cout<<"distructor is colled"<<endl;

    }

}; 
 
int main() 
{ 
    class area obj; 
    return 0; 
}