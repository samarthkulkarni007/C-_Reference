#include <iostream>
using namespace std;

class rectangle {

public:

    int width;
    static int height;
    static int get_static_var();
    rectangle(int a, int b)
    {
        width = a;
        height = 80;
        cout << "Init done\n";
    }

    int ret_type()
    {
        return height;
    }

    float add(int a, int b)
    {
        height = 90;
        cout << "Adding without refernce in float\n";
        return a + b;
    }

    float add(float a, int b)
    {
        return a + b;
    }
    ~rectangle()
    {
        cout << "Distructor called \n";
    }
};

/*
* Initialization of static variable should always initialized outside the class
* 
*/

int rectangle::height = 0;

int rectangle::get_static_var()
{
    return rectangle::height;
}
int main()
{
    rectangle rec(10, 20),rec2(10,30);
    cout << rectangle::height<<"\n";
    int a = 0, b = 10;
    rec.add(10, 20);
    cout <<rectangle::get_static_var() << "\n";

    std::cout << "Hello World!\n";
}
