#include<iostream> 
using namespace std; 
class BOOK 
{ 
    int N; 
    int BOOKNO; 
    char BOOKTITLE[20]; 
    float PRICE; 
    float TOTAL_COST(int N); 
    static int num; 
public: 
    BOOK() 
    { 
        num++; 
    } 
 
    static void display() 
    { 
        cout<<"Number of student:"<<num-1; 
    } 
    void INPUT() 
    { 
        cout<<"Enter Book No. :"; 
        cin>>BOOKNO; 
        cout<<"Enter Book Title :"; 
        cin>>BOOKTITLE; 
        cout<<"Enter Price :"; 
        cin>>PRICE;  
    } 
    void PURCHASE() 
    { 
        cout<<"Enter number of copies you want to purchase :"; 
        cin>>N; 
        cout<<"Book No. :"<<BOOKNO<<endl; 
        cout<<"Book Title :"<<BOOKTITLE<<endl; 
        cout<<"Price :"<<PRICE<<endl; 
        cout<<"Total cost="<<TOTAL_COST(N)<<endl; 
    } 
 
}; 
int BOOK::num=0; 
float BOOK::TOTAL_COST(int N) 
{ 
    return PRICE*N; 
} 
int main() 
{
    int a=1;

    start:
        BOOK obj; 
    if(a==1)
    {
        obj.INPUT(); 
        obj.PURCHASE(); 
    }
    else if(a==0)
    {
        goto end;
    }
    cout<<"For add another student info press 1 and 0 for exit."<<endl;
    cin>>a;
    goto start;
    end:
        obj.display(); 

    return 0; 
}