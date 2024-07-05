#include <iostream>
using namespace std;
class book
{
        int n; 
        int bookno;
        char booktitle[20];
        float price;
        int TOTAL_COST(int n);

    public:
        void INPUT()
        {

            cout << "Enter bookno:";
            cin >> bookno;
            cout << "Enter booktitle:";
            cin >> booktitle;
            cout << "Enter a price:";
            cin >> price;

        }
        void PURCHASE ()     
        {

            cout << "bookno:" << bookno << endl;
            cout << "booktitle: " << booktitle << endl;
            cout << "price: "<< price << endl;
            cout<<"Enter numbers of books:";
            cin>>n;
            cout << "total cost:" << TOTAL_COST(n);

        }


};
        int book:: TOTAL_COST(int n)
        {

            return price*n;

        }

int main()
{

class book obj;
obj.INPUT();
obj.PURCHASE();

return 0;
}