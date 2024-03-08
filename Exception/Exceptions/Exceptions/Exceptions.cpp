#include <iostream>
using namespace std;


class customexception :public exception {
public:
    const char* what() const noexcept override {
        return "Custom Execption";
    }
};

class rectangle {
public:
    int width;
    rectangle()
    {
        this->width = 10;
    }
    void set_width(int a)
    {
        if (a < 0) {
            throw invalid_argument{ "Invalid Width" };
        }
        if (a > 100)
        {
            throw out_of_range{ "Logical Error" };

        }
        if (a == 80)
        {
            throw customexception{};
        }
        width = a;

    }

    ~rectangle()
    {
        cout << "Distructor called" << endl;
    }


};

void reset_the_width(rectangle& rec,int value)
{
    try {
        rec.set_width(value);
    }

    catch (const logic_error& ex)
    {
        cout << "Error Encountered" << endl;
        throw;
    }

}

int main()
{
    rectangle rec;
    try {
        
        rec.set_width(80);
    }
    catch (const invalid_argument& ex) {
        cout << "From Invalid Argument" << ex.what() << endl;
    }
    catch (const logic_error& ex) {
        cout << ex.what() << endl;
    }
    catch (const exception& ex) {
        cout << ex.what() << endl;
    }


    // rethrowing the exceptions
    try {
        reset_the_width(rec,110);
    }
    catch (const invalid_argument& ex) {
        cout << "From Invalid Argument" << ex.what() << endl;
    }
    catch (const logic_error& ex) {
        cout << ex.what() << endl;
    }

    std::cout << "Hello World!\n";
}
