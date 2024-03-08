#include <iostream>
using namespace std;

class length {
public:
    int value;
    length(int a)
    {
        cout << "Contructor called\n";
        this->value = a;
    }

    bool operator==(const length& other) const
    {
        return value == other.value;
    }

    bool operator <= (const length& other)
    {
        return value <= other.value;
    }

};

int main()
{
    length len(10), len2(8);
    if (len <= len2)
    {
        cout << "Matched\n";
    }
    else
    {
        cout << "Not Matched\n";
    }
    std::cout << "Hello World!\n";
}

