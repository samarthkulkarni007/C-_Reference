// smartpointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include<memory>

using namespace std;

class example {
public:
    int a, b, c;
    example(int a) {
        this->a = a;
    }
};

int main()
{
    int* a = new int[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = i + 11;
    }
    a = new int[15];
    std::unique_ptr<int[]> p(new int[15]);

    std::unique_ptr<example> myArray[2];

    for (int i = 0; i < 15; i++)
    {
        p[i] = i;
    }
    //unique_ptr<int[]> z = move(p);

    unique_ptr<int[]> z = make_unique<int[]>(25);
    unique_ptr<int> y = make_unique<int>(10); 
    //*y = 34;
    std::cout << "*z: " << z[0] << ", *z: " <<z  << ", *y: "<<*y << std::endl;


    std::shared_ptr<int> ptr1(new int(42));
    std::shared_ptr<int> ptr2 = ptr1; 

    std::cout << "*ptr1: " << *ptr1 << ",ptr: " << ptr1 << "*ptr2: " << *ptr2 << ",ptr2: " << ptr2<< std::endl;


    std::shared_ptr<int[]> ptr3(new int[15]);
    std::shared_ptr<int[]> ptr4 = ptr3;

    for (int i = 0; i < 15; i++)
    {
        ptr3[i] = i + 10;
    }

    std::cout << "ptr3[0]: " << ptr3[0] << ",ptr3: " << ptr3 << "ptr4[0]: " << ptr4[0] << " ,ptr4: " << ptr4 << std::endl;

    ptr1.reset(); // Releases ownership of the object

    cout << "Number of pointers pointing to objects: " << ptr2.use_count()<<endl;


    std::shared_ptr<int[]> arr[5];
    for (auto& arr_a : arr) {
        arr_a = std::make_shared<int[]>(3);
    }

    // Assigning values to each element of the arrays
    for (auto& arr_a : arr) {
        cout << sizeof(arr_a)<<endl;
    }
 
    // Accessing and printing the values
    for (const auto& arr_a : arr) {
        for (int i = 0; i < 3; ++i) {
            arr_a[i] = (i + 3);
        }
        std::cout << std::endl;
    }
    cout << "Sizeof: " << sizeof(arr[0]) <<" " <<arr[0]<< endl;
    return 0;
}
