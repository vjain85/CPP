#include<iostream>
using namespace std;

class Rational
{
    private:
        int n,d;
    public:
        void getVal();
        void setVal(int = 1,int = 2);
        void show();
        Rational sum(Rational &);
};

void Rational::getVal()
{
    cout<<"ENTER N AND D: ";
    cin>>n>>d;
}
void Rational :: setVal(int a,int b)
{
    n = a;
    d = b;
}
void Rational::show()
{
    cout <<""<<n<<"/"<<d<<endl;
}
Rational Rational::sum(Rational &ob)
{
    Rational t;
    t.d = d * ob.d;
    t.n = n * ob.d - d * ob.n;
    return t;
}

int main()
{
    Rational a,b,c;
    a.setVal(4,5);
    b.setVal(3,4);
    a.show();
    cout<<" + ";
    b.show();
    cout<<" = ";
    c = a.sum(b);
    c.show();
    return 0;
}
