/// Mohan's monthly salary includes basic + 18% TA + 10% HRA + 16% DA

#include<iostream>
using namespace std;

struct Salary
{
    float basic,net;
    void getval()
    {
        cout << "Enter basic salary: ";
        cin >> basic;
    }
    void calc()
    {
        net = basic +  (.16 * basic) + (.1 * basic) + (.18 * basic);
    }
    void show()
    {
        cout << "\n Net salary : "<<net;
    }
};

int main()
{
    Salary s;
    s.getval();
    s.calc();
    s.show();

    return 0;
}
