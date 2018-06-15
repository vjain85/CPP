#include<iostream>
using namespace std;

struct Triangle
{
    int a1,a2,a3;

    void show()
    {
        cout << "\nThird angle is: "<<a3;
    }
    void calc()
    {
        a3 = 180 - ( a1 + a2 );
    }
    void getval()
    {
        cout << "enter two angles: ";
        cin >>a1>>a2;
    }
};

int main()
{
    Triangle t;
    t.getval();
    t.calc();
    t.show();

    return 0;
}
