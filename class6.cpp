#include <iostream>
using namespace std;
class reports
{
        int adno;
        char name[20];
        float marks[5];
        float avg=0;
        float GETAVG(float avg);

    public:
        void READINFO()
        {

            cout<<"enter the adno:"<<endl;
            cin>>adno;
            cout<<"enter the name:"<<endl;
            cin>>name;
            for (int i = 0; i < 5; i++)
            {
                    
                cout<<"enter the marks of subject"<<i+1<<": ";
                cin>>marks[i];

                avg+=marks[i];

            }
     
        }
        void DISPLAYINFO()
        {

            cout<<"adno:"<<adno<<endl;
            cout<<"name:"<<name<<endl;
            for (int j = 0; j < 5; j++)
            {
                    
                cout<<"the marks of subject"<<j+1<<" : "<<marks[j]<<endl;
            }
            cout<<"average:"<<GETAVG(avg)<<endl;

        }



};

float reports::GETAVG(float avg)
{
    avg/=5;
    return avg;
}
int main()
{

    class reports s1;
    s1.READINFO();
    cout<<"*********************************************************************"<<endl;
    s1.DISPLAYINFO();

    return 0;
}
