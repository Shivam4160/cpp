#include <iostream>
using namespace std;

class batsman 
{
    float calcavg();
    
    protected:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float bavg ;

    public:

    

   

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
class readdata1:public batsman 
{
    public:
    void readdata()
    {

        cout<<"enter bcode of batsman:"<<endl;
        cin>>bcode;
        cout<<"enter the name of batsman:"<<endl;
        cin>>bname;
        cout<<"enter innings of batsman:"<<endl;
        cin>>innings;
        cout<<"enter the value of notout:"<<endl;
        cin>>notout;
        cout<<"enter runs of batsman:"<<endl;
        cin>>runs;

    }




};

int main()
{
    
    class readdata1 obj;

    obj.readdata();
    obj.displaydata();

    
    return 0;
}

float batsman::calcavg()
    {
        bavg=(float)runs/(innings-notout);
        return (float)bavg;
    }