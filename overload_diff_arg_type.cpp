#include<iostream>
using namespace std;
/// Overloading with different argument types...

int sum(int,int);
float sum(float,float);
int sum(char,char);
double sum (double,double);

int main()
{
    int x1 = 10,x2 = 15,x3;
    float y1 = 20.5, y2 = 12.3,y3;
    double z1 = 30.9, z2 = 25.5,z3;
    char u1 = 'A',u2 = 'B';

    x3 = sum(x1,x2);
    cout << "x1 = "<<x1<<" x2 = "<<x2<<" sum = "<<x3<<endl;

    y3 = sum(y1,y2);
    cout << "y1 = "<<y1<<" y2 = "<<y2<<" sum = "<<y3<<endl;

    z3 = sum(z1,z2);
    cout << " z1 = "<<z1<<" z2 = "<<z2<<" sum = "<<z3<<endl;

    x3 = sum(u1,u2);
    cout << "u1 = "<<u1<<" u2 = "<<u2<< " sum = "<<x3<<endl;

    return 0;
}

int sum(int x,int y)
{
	cout<< "function: int sum(int,int)"<<endl;
	return (x+y);
}
int sum(char x,char y)
{
	cout << "function: int sum(char,char)"<<endl;
	return (x+y);
}
float sum (float x,float y)
{
	cout << "function: float sum(float,float)"<<endl;
	return (x+y);
}
double sum (double x,double y)
{
	cout << "function: double sum(double,double)"<<endl;
	return (x+y);
}
