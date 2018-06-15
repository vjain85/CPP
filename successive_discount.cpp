/// successive discount problem...

#include<iostream>
using namespace std;

struct Discount
{
    int mrp,d1,d2;
    float net_payable;
    void getval()
    {
        cout << "\nEnter MRP : ";
        cin >> mrp;
        cout << "\nEnter discount1 and discount2: ";
        cin>>d1>>d2;
    }
    void calc()
    {
        net_payable = (float)(d1 * mrp / 100) * d2 / 100;
    }
    void show()
    {
        cout << "\nNet Payable Amount : "<<net_payable<<endl;
    }
};

int main()
{
    Discount d;
    d.getval();
    d.calc();
    d.show();
    return 0;
}
