/// degree celcius to degree farenheit conversion...

#include<iostream>
using namespace std;

struct Celcius
{
    float celcius,farenheit;
    void getval()
    {
        cout <<"Enter temperature in degree celcius: ";
        cin>>celcius;
    }
    void calc()
    {
        farenheit = 9.0/5 * celcius + 32;
    }
    void show()
    {
        cout << "\nTemperature in degree farenheit: "<<farenheit;
    }
};

int main()
{
    Celcius c;
    c.getval();
    c.calc();
    c.show();
    return 0;
}
