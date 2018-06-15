/// Area and perimeter of rectangle using structure...

#include<iostream>
using namespace std;

struct Rect
{
    int length,breadth,ar,peri;

    void getval()
    {
        cout << "\nEnter length and breadth: "<<endl;
        cin >> length>>breadth;
    }
    void area()
    {
        ar = length * breadth;
    }
    void perimeter()
    {
        peri = 2 *( length + breadth );
    }
    void show()
    {
        cout << "\nArea of rectangle: "<<ar<<endl;
        cout <<"\nPerimeter of rectangle: "<<peri<<endl;
    }
};

int main()
{
    Rect r;
    r.getval();
    r.area();
    r.perimeter();
    r.show();

    return 0;
}
