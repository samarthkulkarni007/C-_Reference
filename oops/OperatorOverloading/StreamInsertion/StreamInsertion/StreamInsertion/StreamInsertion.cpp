#include <iostream>
#include<ostream>
#include<istream>
using namespace std;
class length {
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
private:
    int value;
    friend ostream& operator<<(ostream& stream, const length& obj);
    friend istream& operator>>(istream& stream, length& obj);


};

ostream &operator<<(ostream& stream, const length& obj)
{
    stream << obj.value;
    return stream;
}

istream &operator>>(istream& stream,length& obj)
{
    int value;
    stream >> value;
    obj.set_value(value);
    return stream;
}

int main()
{
    length obj(45),obj2(20);
    auto obj3=obj+obj2;
    cout << obj;
    cout << "Length: ";
     cin >> obj;
    cout << obj.get_value()<<"\n";
    cout << obj3.get_value();
    std::cout << "Hello World!\n";
}

