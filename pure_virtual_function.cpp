#include<iostream>
using namespace std;

class A
{
    protected:
        int n,d;
    public:
        A(int n = 0,int d = 1)
        {
            this->n = n;
            this->d = d;
        }
        virtual void show() = 0;
};
class B: public A
{
    public:
        virtual void show()
        {
            cout<<"\nClass B: N = "<<n<<" D = "<<d;
        }
};

int main()
{
    B ob;
    cout<<"\nSizeof(A) : "<<sizeof(A);
    cout<<"\nSizeof(B) : "<<sizeof(B);
    ob.show();
    return 0;
}
