/// Rational number sum...

#include<iostream>
using namespace std;

class Rational
{
    private:
        int n,d;
    public:
        void getVal();
        void show();
        void setVal(int = 0,int = 1);
        Rational sum(Rational &);
};

Rational Rational::sum(Rational &ob)
{
    Rational t;
    t.d = d * ob.d;
    t.n = n * ob.d + ob.n * d;
    return t;
}

void Rational::getVal()
{
    cout << "ENTER N AND D: ";
    cin >>n>>d;
}
void Rational :: setVal(int a,int b)
{
    n = a;
    d = b;
}
void Rational :: show()
{
    cout << " "<<n<<"/"<<d<<endl;
}

int main()
{
    Rational a,b,c;

    a.getVal();

    b.setVal(4,7);

    c = a.sum(b);

    a.show();
    cout<<" + ";
    b.show();
    cout << " = ";
    c.show();

    return 0;
}
