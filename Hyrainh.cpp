#include <iostream>
using namespace std;

class student
{
protected:
    int adno;

    char aname[50];
    int maths, sci, eng;

public:
    float total;
    int ctotal();
    void take()
    {
        cout << "enter the admission number:" << endl;
        cin >> adno;
        cout << "enter the student name:" << endl;
        cin >> aname;
        cout << "enter the maths subject marks:" << endl;
        cin >> maths;
        cout << "enter the sci subject marks:" << endl;
        cin >> sci;
        cout << "enter the eng subject marks:" << endl;
        cin >> eng;
    }
};

class takedata : public student
{
public:
    void Showdata()
    {
        cout << "adno:" << adno << endl;
        cout << "name:" << aname << endl;
        cout << "maths marks:" << maths << endl;
        cout << "science marks:" << sci << endl;
        cout << "english marks:" << eng << endl;
    }
};

int student::ctotal()
{
    total = maths + sci + eng;

    cout << "total marks:" <<total;

    
}
class calculate : public student
{

public:
    void total()
    {
        int aa;
        aa=ctotal();
        cout << "total marks:" << aa;
    }
};

int main()
{
    takedata obj;
    obj.take();
    obj.Showdata();
   
    calculate obj1;
    obj.ctotal();
    
    return 0;
}