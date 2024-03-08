#include <iostream>
#include<ostream>
#include<istream>

using namespace std;

class length {
private:
    friend ostream& operator<<(ostream& stream, const length& obj);
    friend istream& operator>>(istream& stream, length& obj);
public:
    int* ptr;
    int value;
    length(int a)
    {
        cout << "Constructor called\n";
        value = a;
        ptr = &value;
    }
    length(length& len)
    {
        cout << "Copy Constructor\n";
        value = len.value;
        ptr = &value;

    }
    std::strong_ordering operator<=>(const length& other) const
    {
        return value <=> other.value;
    }

    void set_ptr(int a)
    {
        *ptr = a;
    }

    int get_ptr()
    {
        return *ptr;
    }

    void set_value(int a)
    {
        value = a;
    }
    int get_value()
    {
        return value;
    }
    length operator+(const length obj2)
    {
        return length(value + obj2.value);
    }

    void operator += (const length& other) {
        this->value += other.value;
    }


};

ostream& operator<<(ostream& stream, const length& obj)
{
    stream << obj.value;
    return stream;
}

istream& operator>>(istream& stream, length& obj)
{
    int value;
    stream >> value;
    obj.set_value(value);
    return stream;
}

int main()
{
    length len(10);
    length len2 = len;
    len2.set_value(50);
    std::cout<< *len.ptr<<" "<<*len2.ptr<<" " << "Hello World!\n";}

