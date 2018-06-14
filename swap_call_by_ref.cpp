#include<iostream>
using namespace std;
/// Swapping using call by reference...

void swap(int&,int&);

int main()
{
    int x = 10,y = 15;
    cout << " x = "<<x<<" y = "<<y<<" to swap "<<endl;
    swap(x,y);
    cout << " x = "<<x<<" y = "<<y<<" on swap "<<endl;
    return 0;
}
void swap(int &x,int &y)
{
    int t = x;
    x = y;
    y = t;
}
