#include <iostream>
using namespace std;

template<typename T> T larger(T a, T b) {
    return (a > b) ? a : b;
}

template<typename T,typename K> K larger(T a, K b) {
    return (a > b) ? a : b;
}


template<typename T, typename Z> class example {
private:
    T a;
    Z b;
public:
    example(T p, Z q);
};

template<typename T, typename Z>
example<T, Z>::example(T p, Z q) :a(p),b(q) {
    cout << "Constructor Called "<<this->a<<" " << this->b << endl;
}

int main()
{
    std::cout << "Hello World!\n";
    int a = 90;
    double b = 99.9;

    example<int, double> ex(a, b);
    cout << larger<int,double>(a, b) << endl;
}
