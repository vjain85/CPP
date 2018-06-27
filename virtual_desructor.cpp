#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"\nConstructing base !";
        }
        virtual ~Base()
        {
            cout<<"\nDestroying base !";
        }
};

class Derive : public Base
{
    public:
        Derive()
        {
            cout <<"\nConstructing Derive !";
        }
        ~Derive()
        {
            cout<<"\nDestroying derive !";
        }
};

int main()
{
    Base *base_ptr = new Derive();
    delete base_ptr;
    return 0;
}
