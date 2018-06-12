#include<iostream>
using namespace std;

int main()
{
    int n,*p;
    cout << "\n Input no. of vars: ";
    cin >> n;
    p = new int[n];
    for(int x = 0; x < n ; x++)
    {
        cout << "\nInput: ";
        cin >> p[x];
    }
    for(int x = 0;x <n; x++)
    {
        cout<< "\n "<<p[x];
    }
    delete []p;
    return 0;
}

