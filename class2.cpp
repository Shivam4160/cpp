#include <iostream>
using namespace std;

class batsman 
{
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float bavg ;
    float calcavg();
    
    public:

    void readdata()
    {

        cout<<"enter bcode of batsman:"<<endl;
        cin>>bcode;
        cout<<"enter the name of batsman:"<<endl;
        cin>>bname;
        cout<<"enter innings of batsman:"<<endl;
        cin>>innings;
        cout<<"enter the value of notout"<<endl;
        cin>>notout;
        cout<<"enter runs of batsman"<<endl;
        cin>>runs;

    }

   

    void displaydata()
    {

        cout<<"name of batsman is:"<<bname<<endl;
        cout<<"bcode of batsname is:"<<bcode<<endl;
        cout<<"innings of batsname is:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"runs of batsname is:"<<runs<<endl;
        cout<<"avg of batsname is"<<calcavg();

    }

    
    
    
    
};
//  float batsman::calcavg(int bavg)
//     {
//         bavg=runs/(innings-notout);
//         return (float)bavg;
//     }

int main()
{
    
    class batsman obj;

    obj.readdata();
    obj.displaydata();

    
    return 0;
}

float batsman::calcavg()
    {
        bavg=(float)runs/(innings-notout);
        return (float)bavg;
    }