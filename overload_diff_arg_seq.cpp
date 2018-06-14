#include<iostream>
using namespace std;

int sum(int ,char);
int sum(char,int);
float sum(int,float);
float sum(float,int);

int main()
{
    int x = 10,z;
    char a = 'a';
    float y = 12.3,u;
    cout << "x = "<<x<<" y = "<<y<<" char = "<<a<<endl;
    z = sum(x,a);
    cout << " sum = "<<z<<endl;
    z = sum (a,x);
    cout << " sum = "<<z<<endl;

    u = sum(x,y);
    cout << " sum = "<<u<<endl;
    u = sum (y,x);
    cout << " sum = "<<u<<endl;
    return 0;
}
int sum(int x,char y)
{
	cout<< "function: int sum(int,char)"<<endl;
	return (x+y);
}
int sum(char x,int y)
{
	cout<< "function: int sum(char,int)"<<endl;
	return (x+y);
}
float sum(int x,float y)
{
	cout<< "function: float sum(int,float)"<<endl;
	return (x+y);
}
float sum(float x,int y)
{
	cout<< "function: float sum(float,int)"<<endl;
	return (x+y);
}
