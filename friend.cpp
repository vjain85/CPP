#include<iostream>
using namespace std;

class Rational
{
    private:
        int n,d;
    public:
        /**friend void getVal();
        friend void setVal();
        friend void show();*/
        void show()
        {
            cout << "\n"<<n<<"/"<<d;
        }
        friend class dost;
        Rational (int a = 0,int b = 1)
        {
            n = a;
            d = b;
            cout << "Object Created successfully !"<<endl;
        }
        ~Rational()
        {
            cout << "\n\nDead Object : "<<n<<"/"<<d<<endl;
        }
};

class dost
{
    private:
        Rational obj;
    public:
        void setVal()
        {
            obj.n = 10;
            obj.d = 20;
        }
        void getVal()
        {
            cout << "\nEnter N and D : ";
            cin >> obj.n>>obj.d;
        }
        void show()
        {
            cout << "\n\n"<<obj.n<<"/"<<obj.d;
        }
};

int main()
{
    Rational a(5,2);
    Rational b(6);
    Rational c(8,3);
    dost k;

    a.show();
    b.show();
    c.show();
    k.show();

    return 0;
}
