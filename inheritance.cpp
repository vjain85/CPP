#include<iostream>
using namespace std;

class A
{
    private:
        int x,y;
    protected:
        int z;
    public:
        A (int a = 1,int b = 4,int c = 3)
        {
            x = a;
            y = b;
            z = c;
        }
        void calcu()
        {
            z = x + y;
        }
        void show()
        {
            cout<<"X = "<<x<<" y = "<<y<<" Z = "<<z;
        }
};
class B : protected A
{

};
class C : public B
{

};

int main()
{
    B x;
    x.calcu();
    x.show();
    C y;
    y.calcu();
    y.show();
    return 0;
}
