

#include <iostream>
using namespace std;

class rectangle {

public:

    int width, height;
    rectangle(int a, int b)
    {
        width = a;
        height = b;
        cout << "Init done\n";
    }
    ~rectangle()
    {
        cout << "Distructor called \n";
    }
};

int main()
{
    rectangle rec(10,20);
    std::cout << "Hello World!\n";
}
 