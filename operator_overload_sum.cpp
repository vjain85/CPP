/// Rational sum using operator overloading and friend funcion...

#include<iostream>
using namespace std;

class Rational
{
    private:
        int n,d;
    public:
        void show()
        {
            cout << "\n"<<n<<"/"<<d;
        }
        Rational(int a = 0,int b = 1)
        {
            n = a;
            d = b;
        }
        Rational operator+(Rational &);
        friend Rational sum(Rational &,Rational &);
        Rational member_sum(Rational &);
};

Rational sum(Rational &ob1,Rational &ob2)
{
    Rational c;
    c.d = ob1.d * ob2.d;
    c.n = ob1.n * ob2.d + ob1.d * ob2.n;
    return c;
}
Rational Rational::member_sum(Rational &ob)
{
    Rational c;
    c.d = d * ob.d;
    c.n = n * ob.d + d * ob.n;
    return c;
}

Rational Rational::operator+(Rational &ob)
{
    Rational c;
    c.d = d * ob.d;
    c.n = n * ob.d + d * ob.n;
    return c;
}


int main()
{
    Rational a(3,5),b(6,7),c;
    a.show();
    b.show();
    c = a + b;
    c.show();
    c = sum(a,b);
    c.show();
    c = a.member_sum(b);
    c.show();
    return 0;
}
