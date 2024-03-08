#include <iostream>
using namespace std;

class rectangle {

public:

    int width;
    static int height;
    //static int get_static_var();
    rectangle()
    {
        width = 90;
    }
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
    /* 1) Always declare const after function to say it as const function to access it over objects, 
    
    else function would not be accessible and it will throw complier error.
        2) In short you can access only constant members(functions nd variables)
    
    */
    int get_width() const
    {
        return this->width;
    }

    int set_width(int a) const
    {
        if (a == 0)
        {
            return this -> width;
        }
        else
        {
            return 0;
        }
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

int main()
{
    //Immutable
    const rectangle rec;
    cout<<rec.set_width(1);
    cout << "Hello World!\n";
}
