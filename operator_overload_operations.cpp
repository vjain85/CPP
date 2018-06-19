/// Rational operations using operator overloading ...

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
        Rational operator+(int );
        friend Rational operator+(int,Rational &);

        Rational operator-(Rational &);
        Rational operator-(int);
        friend Rational operator-(int,Rational &);

        Rational operator*(Rational &);
        Rational operator*(int);
        friend Rational operator*(int,Rational &);

        Rational operator/(Rational &);
        Rational operator/(int);
        friend Rational operator/(int,Rational &);

        bool operator<(Rational &);
        bool operator<(int);
        friend bool operator<(int,Rational &);

        bool operator>(Rational &);
        bool operator>(int);
        friend bool operator>(int,Rational &);

        bool operator<=(Rational &);
        bool operator<=(int);
        friend bool operator<=(int,Rational &);

        bool operator>=(Rational &);
        bool operator>=(int);
        friend bool operator>=(int,Rational &);

        bool operator==(Rational &);
        bool operator==(int);
        friend bool operator==(int,Rational &);

        bool operator!=(Rational &);
        bool operator!=(int);
        friend bool operator!=(int,Rational &);

};

/**----------------------------------------------------*/

Rational Rational::operator+(Rational &ob)
{
    Rational c;
    c.d = d * ob.d;
    c.n = n * ob.d + d * ob.n;
    return c;
}
Rational Rational::operator+(int a)
{
    Rational c;
    c.d = d;
    c.n = n  + d * a;
    return c;
}
Rational operator+(int a,Rational &ob)
{
    Rational c;
    c.d = ob.d;
    c.n = ob.n  + ob.d * a;
    return c;
}

/**-------------------------------------------*/

Rational Rational::operator-(Rational &ob)
{
    Rational c;
    c.d = d * ob.d;
    c.n = n * ob.d - d * ob.n;
    return c;
}

Rational Rational::operator-(int a)
{
    Rational c;
    c.d = d;
    c.n = n - d * a;
    return c;
}

Rational operator-(int a, Rational &ob)
{
    Rational c;
    c.d = ob.d;
    c.n = a * ob.d - ob.n;
    return c;
}

/**--------------------------------------------*/

Rational Rational::operator*(Rational &ob)
{
    Rational c;
    c.n = n * ob.n;
    c.d = d * ob.d;
    return c;
}
Rational Rational::operator*(int a)
{
    Rational c;
    c.n = n * a;
    c.d = d;
    return c;
}
Rational operator*(int a,Rational &ob)
{
    Rational c;
    c.n = a * ob.n;
    c.d = ob.d ;
    return c;
}

/**--------------------------------------------*/

Rational Rational::operator/(Rational &ob)
{
    Rational c;
    c.n = n * ob.d;
    c.d = d * ob.n;
    return c;
}
Rational Rational::operator/(int a)
{
    Rational c;
    c.n = n ;
    c.d = d * a;
    return c;
}
Rational operator/(int a,Rational &ob)
{
    Rational c;
    c.n = a * ob.d;
    c.d = ob.n;
    return c;
}

/**--------------------------------------------*/

bool Rational::operator<(Rational &ob)
{
    return ( ( (float)n / d ) < ( (float)ob.n/ob.d) );
}

bool Rational::operator<(int a)
{
    return ( (float)n/d < a);
}

bool operator<(int a,Rational &ob)
{
    return( a < (float)ob.n/ob.d);
}
/**--------------------------------------------*/

bool Rational::operator>(Rational &ob)
{
    return ( ( (float)n / d ) > ( (float)ob.n/ob.d) );
}

bool Rational::operator>(int a)
{
    return ( (float)n/d > a);
}

bool operator>(int a,Rational &ob)
{
    return( a > (float)ob.n/ob.d);
}
/**--------------------------------------------*/

bool Rational::operator<=(Rational &ob)
{
    return ( ( (float)n / d ) <= ( (float)ob.n/ob.d) );
}

bool Rational::operator<=(int a)
{
    return ( (float)n/d <= a);
}

bool operator<=(int a,Rational &ob)
{
    return( a <= (float)ob.n/ob.d);
}

/**--------------------------------------------*/
bool Rational::operator>=(Rational &ob)
{
    return( (float)n/d >= (float)ob.n/ob.d);
}
bool Rational::operator>=(int a)
{
    return( a <= (float)n/d);
}
bool operator>=(int a,Rational &ob)
{
    return( a >= (float)ob.n/ob.d);
}
/**--------------------------------------------*/

bool Rational::operator==(Rational &ob)
{
    return ( ( (float)n / d ) == ( (float)ob.n/ob.d) );
}

bool Rational::operator==(int a)
{
    return ( (float)n/d == a);
}

bool operator==(int a,Rational &ob)
{
    return( a == (float)ob.n/ob.d);
}

/**--------------------------------------------*/

bool Rational::operator!=(Rational &ob)
{
    return ( ( (float)n / d ) != ( (float)ob.n/ob.d) );
}

bool Rational::operator!=(int a)
{
    return ( (float)n/d != a);
}

bool operator!=(int a,Rational &ob)
{
    return( a != (float)ob.n/ob.d);
}

/**--------------------------------------------*/
int main()
{
    Rational a(3,5),b(5),c;
    a.show();
    b.show();

    cout<< "\n\nSum:";
    c = a + b; /// c = a.sum(b);
    c.show();
    c = a + 5; /// c = a.sum(5);
    c.show();
    c = 5 + a; /// c = sum(5,a);
    c.show();
    cout<< "\n\nDiff:";

    c = a - b; /// c = a.diff(b);
    c.show();
    c = a - 5; /// c = a.diff(5);
    c.show();
    c = 5 - a; /// c = diff(5,a);
    c.show();

    cout<<"\n\nMult:";
    c = a * b;
    c.show();
    c = a * 5;
    c.show();
    c = 5 * a;
    c.show();

    cout<<"\n\nDiv:";
    c = a / b;
    c.show();
    c = a / 5;
    c.show();
    c = 5 / a;
    c.show();

    cout<<" \n\n < :\n";
    cout<<(a < b)<<endl;
    cout<<(a < 5)<<endl;
    cout<<(5 < a)<<endl;

    cout<<"\n\n > :\n";
    cout<<(a > b)<<endl;
    cout<<(a > 5)<<endl;
    cout<<(5 > a)<<endl;

    cout<<"\n\n <= :\n";
    cout<<(a <= b)<<endl;
    cout<<(a <= 5)<<endl;
    cout<<(5 <= a)<<endl;

    cout<<"\n\n >= :\n";
    cout<<(a >= b)<<endl;
    cout<<(a >= 5)<<endl;
    cout<<(5 >= a)<<endl;

    cout<<"\n\n == :\n";
    cout<<(a == b)<<endl;
    cout<<(b == 5)<<endl;
    cout<<(5 == b)<<endl;

    cout<<"\n\n != :\n";
    cout<<(a != b)<<endl;
    cout<<(b != 5)<<endl;
    cout<<(5 != b)<<endl;


    return 0;
}
