
#include <iostream>
#include<ostream>
#include<istream>

using namespace std;

class length {
private:
    int value;
    friend ostream& operator<<(ostream& stream, const length& obj);
    friend istream& operator>>(istream& stream, length& obj);
public:
    length(int a)
    {
        value = a;
    }
    std::strong_ordering operator<=>(const length& other) const
    {
        return value <=> other.value;
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

    void operator += (const length & other) {
        value += other.value;
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
    length val(10), val2(30);
    val += val2;
    cout << val.get_value();
    std::cout << "Hello World!\n";
}