#include <iostream>
#include <compare>

using namespace std;

class length {
public:
    int value;
    length(int a)
    {
        value = a;
    }
    std::strong_ordering operator<=>(const length& other) const
    {
        return value <=> other.value;
    }

};



int main()
{
    length len(20), len2(30);
    auto result = len <=> len2;
    if (result == strong_ordering::less)
    {
        cout << "Less then\n";
    }
    else if (result == strong_ordering::greater)
    {
        cout << "Greater then\n";
    }
    else
    {
        cout << "Equal \n";
    }
    std::cout << "Hello World!\n";
}
