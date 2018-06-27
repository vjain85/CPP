#include<iostream>
using namespace std;

struct node2
{
    int a,b;

    void getval()
    {
        cout <<"Enter a,b: ";
        cin>>a>>b;
        calc();
    }
     void calc()
    {
        cout << " "<<(a+b)<<endl;
    }
};

int main()
{
    node2 m;
    m.getval();
    return 0;
}
