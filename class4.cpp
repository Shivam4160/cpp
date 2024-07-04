#include <iostream>
using namespace std;
class flight
{
    int flightno;
    char Description[50];
    char Destination[50];
    int distance;
    float fuel;
    int CALFUEL(int distance)
        {
        
            if(distance<=1000&&distance>0)
            {

                return 500;

            }
            else if(distance<=2000)
            {

                return 1100;

            }
            else if(distance>2000)
            {

                return 2200;

            }

        }
    

    public:

        void FEEDINFO()
        {

            cout << "enter Description";
            cin >> Description;
            cout << "enter flight no";
            cin >> flightno;
            cout << "Enter Destination:";
            cin >> Destination;
            cout << "Enter Distance:";
            cin >> distance;


        }


        void SHOWINFO()
        {
            cout << "Destination:" << Destination << endl;
            cout << "DISCRIPTION: " << Description << endl;
            cout << "Flight number: " << flightno << endl;
            cout << "Fuel:" << CALFUEL(distance);
        }
};
        


int main()
{

    class flight obj;
    obj.FEEDINFO();
    obj.SHOWINFO();

    return 0;
}