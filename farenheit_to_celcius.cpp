/// degree farenheit to degree celcius conversion...

#include<iostream>
using namespace std;

struct Farenheit
{
    float celcius,farenheit;
    void getval()
    {
        cout<< "Enter temperature in degree farenheit: ";
        cin>>farenheit;
    }
    void calc()
    {
        celcius = 5.0/9 * (farenheit - 32);
    }
    void show()
    {
        cout<<"\nTemperature in degree ccelcius : "<<celcius<<endl;
    }
};

int main()
{
    Farenheit f;
    f.getval();
    f.calc();
    f.show();
    return 0;
}
