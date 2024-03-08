#include <iostream>
using namespace std;

class rectangle {

public:

    int width, height;
    static int get_static_var();
    rectangle(int a,int b)
    {
        width = a;
        height = b;
        cout << "Init done\n";
    }

    rectangle(const rectangle& source)
    {
        width = 30;
        height = 40;
        cout << "Inside copy constructor\n";       
    }
};
/*
*When we pass object as argument to function it would copy the all the object variables to argument object
* By defualt it would call contructor if not defined by used 
* If user has defined copy constructor, it would make use of it
*
*/

void funct(rectangle rect)
{
    cout << "Inside function "<<rect.width<<" "<<rect.height<<"\n";
    rect.width = 89;
}

int main()
{
    rectangle rec(10, 20);
    std::cout << "Hello World!\n";
    funct(rec);

    cout << rec.width;
}

