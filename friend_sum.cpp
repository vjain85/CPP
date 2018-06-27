#include<iostream>
using namespace std;

class Rational
{
    private:
        int n,d;
    public:
        friend void getval();
        friend void show(Rational &);
        friend Rational sum(Rational &,Rational &);
        Rational(int a = 0,int b = 1)
        {
            n = a;
            d = b;
        }
        ~Rational()
        {
            cout<< "\nDead Object:"<<n<<"/"<<d<<endl;
        }
};

Rational sum(Rational &ob1,Rational &ob2)
{
    Rational ob3;
    ob3.d = ob1.d * ob2.d;
    ob3.n = ob1.n * ob2.d + ob1.d * ob2.n;
    return ob3;
}
void show(Rational &ob)
{
    cout<<""<<ob.n<<"/"<<ob.d;
}

int main()
{
    Rational a(3,5),b(5);
    show(a);
    cout<< " + ";
    show(b);
    cout<<" = ";
    Rational c = sum(a,b);
    show(c);

    return 0;
}
