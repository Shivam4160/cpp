#include<iostream>
using namespace std;
class Student{
    int admno;
    char sname [20];
    float eng, math, sci;
    float total;
    float ctotal(float eng, float math, float sci);
    public:
        void takedata(){
        cout<<"Enter admno:";
        cin>>admno;
        cout<<"Enter sname:";
        cin>>sname;
        cout<<"Enter eng marks:";
        cin>>eng;
        cout<<"Enter math marks:";
        cin>>math;
        cout<<"Enter sci marks:";
        cin>>sci;
        };
    void Showdata() {
        cout<<" admno:"<<admno<<endl;
        cout<<"sname:"<<sname<<endl;
        cout<<"eng marks:"<<eng<<endl;
        cout<<"math marks: "<<math<<endl;
        cout<<"sci marks:"<<sci<<endl;
        cout<<"Total:"<<ctotal(eng, math, sci);
        };
};
float Student::ctotal(float eng, float math, float sci){
return eng+math+sci;
}
int main()
{
class Student obj;
obj.takedata();
obj.Showdata();
return 0;
}