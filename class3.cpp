#include <iostream>
using namespace std;
class test
{
    int TestCode;
    char Description[50];
    int NoCandidate;
    int CenterReqd;
    int CALCNTR();

    public:

        void SCHEDULE()
        {

            cout << "enter Description";
            cin >> Description;
            cout << "Enter TESTCODE:";
            cin >> TestCode;
            cout << "Enter a NUMBER OF CANDIDIDATE:";
            cin >> NoCandidate;

        }


        void DISPTEST()
        {
            cout << "TESTCODE:" << TestCode << endl;
            cout << "DISCRIPTION: " << Description << endl;
            cout << "NUMBER OF CANDIDIDATE: " << NoCandidate << endl;
            cout << "CenterReqd:" << CALCNTR();
        }
};
        int test::CALCNTR()
        {
        CenterReqd = (NoCandidate / 100 + 1);
        return CenterReqd;
        }


int main()
{

    class test obj;
    obj.SCHEDULE();
    obj.DISPTEST();

    return 0;
}