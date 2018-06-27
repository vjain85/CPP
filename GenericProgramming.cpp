/**
GENERIC PROGRAMMING IN C++
use of template

template is a keyword of C++ ,
used for AUTOMATICALLY GETTING
REQUIRED DATATYPE FOR FUNCTION
PARAMETER AND RETURN TYPE


we must make template first then it can
be used with function


template<class T>   /// T is automatic polymorphic
T sum(T a , T b)   /// datatype name
{
     return a + b ;
}



*/

#include<iostream>
#include"RationalThis.h"

using namespace std;

template<class T>   /// T is automatic polymorphic
T sum(T a , T b)   /// datatype name
{
     return a + b ;
}

template <class T1 , class T2>
T1 sum(T1 a, T2 b)
{
    return a+b;
}



/**
int sum(int a,int b)
{
    return a+b;
}
*/

int main()
{
    Rational ob1(3,5),ob2(4,7);
    Rational ob3 = ob1 + ob2;
       cout<<"\n  "<<sum(12,3) <<"  "<<"   "<<sum('A','B');
       cout<<"  "<<ob3<<"   "<<sum(ob1,5);
}
