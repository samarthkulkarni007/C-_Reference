// Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    cout << "Hello World!\n";
    vector<int> v1;
    vector<int>  v2(20);

    //iota(v2.begin(), (v2.begin() + 2), 10);

    cout << v2[10] << endl;

    for (int i = 0; i < 20; i++)
    {
        v2[i] = i;
    }

    for (auto it : v2)
    {
        cout << it << " ";
    }

    cout <<"Printing Size and Capacity: " << v2.size() << " " << v2.capacity() << endl;

    v2.push_back(21);

    v2.pop_back();

    v2.insert(v2.begin(), 10);

    v1 = { 1,2,3,4,5,6 };

    v2.insert(v2.begin() + 3, v1.begin(), v1.end());

    cout << "Printing v2" << endl;

    for (auto it : v2)
    {
        cout << it<<" ";
    }
    cout << endl;

    cout << "After Erase ";
    v2.erase(v2.begin());
    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "After Erase ";
    v2.erase(v2.begin(),v2.begin()+3);
    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "After Pushback and insert: " << v2.size() << " " << v2.capacity() << endl;

    cout <<"Max Sizes" << v1.max_size() << " " << v2.max_size() << endl;

    /*Front and back does not return pointer to be remebered*/
    cout << "Front and back " << v2.front() << " " << v2.back() << endl;

    cout << "Is Empty v2: " << v2.empty()<<endl;

    vector<int> v3;

    cout << "Is Empty v3: " << v3.empty() << endl;


    /*Shrink to fit*/

    cout << "Before shrink " << v2.capacity() << endl;

    v2.shrink_to_fit();

    cout << "After shrink " << v2.capacity() << endl;

    /*Check position at()*/

    /*Exception will be thrown if index is exceeded within defined range*/

    cout << "Check Position " << v2.at(20) << endl;

    v2.emplace(v2.begin(), 10);
}

/*
size(), capacity(), max_size()
=, [], at()
front(), back()
shrink_to_fit()
empty()
begin(), end(), rbegin(), rend(),cbegin(),cend(),crbegin(),crend()
insert(), erase(), swap(),clear(),emplace()
push_back(), pop_back(),emplace_back()
*/


/*List*/
/*
begin(), end(), rbegin(), rend(),cbegin(),cend(),crbegin(),crend()
size(), empty(), max_size(),resize(),clear()
front(),back()
push_back(), pop_back(),emplace_back(),emplace(),push_front(),pop_front(),emplace_front()
remove(),remove_if(),merge(),sort(),reverse()
*/


