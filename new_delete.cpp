#include<iostream>
using namespace std;
// dynamic memory allocation in c++

int main()
{
    int n,*p;
    cout << "\n Input no. of vars: ";
    cin >> n;
    p = new int[n]; // p = (int)malloc(n*sizeof(int));
    for(int x = 0; x < n ; x++)
    {
        cout << "\nInput: ";
        cin >> p[x];
    }
    for(int x = 0;x <n; x++)
    {
        cout<< "\n "<<p[x];
    }
    delete []p; // free(p);
    return 0;
}

