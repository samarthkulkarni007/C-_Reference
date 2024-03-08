#include <iostream>
using namespace std;



int main()
{
    auto a = [](int a, int b)->double {
        return (a + b / 2.0);
    };
    std:cout << a(2,5)<<" " << "Hello World!\n";
}
