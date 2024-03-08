#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, -90);

    for (auto it = std::begin(v); it != std::end(v); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v2 = { 10,20,30,40,50,60,70,80 };

    auto it = v2.begin() + 4;
    cout << "*it : = > " << *it << endl;

    v2.insert(it, 100);
    cout << "*it : = > " << *it << endl;

    std::cout << "Hello World!\n";
}
