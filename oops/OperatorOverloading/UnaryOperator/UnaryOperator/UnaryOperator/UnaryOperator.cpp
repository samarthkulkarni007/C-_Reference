// UnaryOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class length {
public:
    int *len,a;
    length(int a):a(a)
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
    length leng(10);
    length len2 = leng++;
    std::cout<<*(len2.len)<<" " <<*(leng.len)<<" "<<leng.a << " " << "Hello World!\n";
}
