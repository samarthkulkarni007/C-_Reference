#include <iostream>
using namespace std;

class widget {
public:
    virtual void enable() 
    {
        cout << "Virtual Function from Base class "<<enabled<<"\n";
        enabled = true;
    }
    void  disable()
    {
        cout << "Base class\n";
        enabled=false;

    }
    bool isEnabled() const
    {
        return enabled;
    }
protected:
    int enabled=true;

};


class checkbox :public widget {
public:
    virtual void enable()
    {
        enabled = false;
        cout << "Derived class checkbox" << enabled << "\n";
    }
};

class radiobutton :public checkbox {
public:
    void enable() override
    {
        enabled = false;
        cout << "Derived class from radio button " << enabled << "\n";
    }
};

int main()
{
    widget *wid=new checkbox();
    wid->enable();
    std::cout << "Hello World!\n";
}

