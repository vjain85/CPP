#include<iostream>
using namespace std;

/// Overloading with different no. of arguments...

int sum();
int sum(int);
int sum(int,int);
int sum(int,int,int);

int main()
{
    int x = 10,y = 20,z;
    cout << " x = "<<x<<" y = "<<y<<endl;

    z = sum(); /// called function: int sum();
    cout << " x = "<<x<<" y = "<<y<<" z = "<<z<<endl;

    z = sum(x); /// called function : int sum(int);
    cout << " x = "<<x<<" y = "<<y<<" z = "<<z<<endl;

    z = sum(x,y); /// called function: int sum(int,int);
    cout << " x = "<<x<<" y = "<<y<<" z = "<<z<<endl;

    z = sum(x,y,z); /// called function: int sum(int,int,int);
    cout << " x = "<<x<<" y = "<<y<<" z = "<<z<<endl;

    return 0;
}
int sum()
{
    int x = 10,y = 20;
    cout << "called function: int sum();"<<endl;
    return (x+y);
}
int sum(int x)
{
    int y = 20;
    cout << "called function: int sum(int)" << endl;
    return (x+y);
}
int sum(int x,int y)
{
    cout << "called function: int sum(int,int)" << endl;
    return (x+y);
}
int sum(int x,int y,int z)
{
    cout << "called function: int sum(int,int,int)"<<endl;
    z = x + y;
    return (z);
}
