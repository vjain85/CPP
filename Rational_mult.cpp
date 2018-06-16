#include<iostream>
using namespace std;

class Rational
{
    private:
        int n ,d;
    public:
        void getVal();
        void setVal(int = 0,int = 1);
        void show();
        Rational mult(Rational &);
};
void Rational::getVal()
{
    cout << "ENTER N AND D: ";
    cin>>n>>d;
}
void Rational::setVal(int a,int b)
{
    n = a;
    d = b;
}
void Rational::show()
{
    cout<<" "<<n<<"/"<<d<<endl;
}
Rational Rational::mult(Rational &ob)
{
    Rational t;
    t.n = n * ob.n;
    t.d = d * ob.d;
    return t;
}


int main()
{
    Rational a,b,c;
    a.getVal();
    b.getVal();
    c = a.mult(b);
    a.show();
    cout<< "  *"<<endl;
    b.show();
    cout<<"  ="<<endl;
    c.show();
    return 0;
}
