/// Use of static data member...

#include<iostream>
using namespace std;
class Obj
{
    static int x;  /// Declare static...
    public:
    void setval(){ x = 15; }
    void print(){
        x+=10;
        cout << x<<endl;
    }
};
int Obj::x = 0;  /// Define static data member...
int main()
{
    Obj A,B;
    cout<<sizeof(A)<<endl;
    A.setval();
    A.print();B.print();

    return 0;
}
