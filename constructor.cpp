#include<iostream>
using namespace std;
/// constructor test..
class Rational
{
    private:
        int n,d;
    public:
        Rational (int a = 0,int b = 1)
        {
            n = a;
            d = b;
            cout << " \nCalled constructor Rational(int ,int)"<<endl;
        }
        ~Rational()
        {
            cout<<"\nDead member: "<<n<<"/"<<d<<endl;
        }
        void show();
        Rational sum(Rational &);
};


void Rational::show()
{
    cout <<""<<n<<"/"<<d<<endl;
}
Rational Rational::sum(Rational &ob)
{
    Rational t;
    t.d = d * ob.d;
    t.n = n * ob.d + d * ob.n;
    return t;
}

int main()
{
    Rational a;
    Rational b(5);
    Rational c(2,3),d;

    a.show();
    b.show();
    c.show();
    d = a.sum(b).sum(c);
    d.show();

    return 0;
}
