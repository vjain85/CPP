/// Area and Circumference of circle using structure...

#include<iostream>
#define PI 3.14
using namespace std;

struct Circle
{
    int r;
    float ar,circum;

    void getval()
    {
        cout << " \n Enter radius: "<<endl;
        cin >> r;
    }
    void area()
    {
        ar = PI *r*r;
    }
    void Circum()
    {
        circum = 2 * PI * r;
    }
    void show()
    {
        cout << "\nArea of circle: "<<ar<<endl;
        cout << "\nCircumference of circle: "<<circum<<endl;
    }
};

int main()
{
    Circle c;
    c.getval();
    c.area();
    c.Circum();
    c.show();

    return 0;
}
