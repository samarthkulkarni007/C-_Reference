#include <iostream>
using namespace std;


class length {
public:
    int* len, a;
    length()
    {
        this->a = 90;
        this->len = &this->a;
        cout << "Constructor called\n";
    }
    length(int a) :a(a)
    {
        this->len = &this->a;
        cout << "Contructor called\n";
    }
    length(const length& leng)
    {
        a = leng.a;
        this->len = &this->a;
        cout << "Copy Constructor\n";

    }

    length& operator++()
    {
        a++;
        return *this;
    }

    length operator++(int)
    {
        length copy = *this;
        ++a;
        return copy;
    }
    ~length() {
        delete len; // Deallocate memory for len
    }


};

int main()
{
    length len[6];
    std::cout << "Hello World!\n";
}