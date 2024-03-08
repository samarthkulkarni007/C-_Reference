// list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <vector>
using namespace std;

 bool remove_even( const int& t)
{
    return (t % 2 == 0);
}

int main()
{
    list<int> l1{1,2,3,4,5};

    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;
    
    for (auto it = l1.rbegin(); it != l1.rend(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;

    cout << "Front " << l1.front() << " Back " << l1.back() << endl;

    /*Size examples initial it is 5*/
    cout << "list size " << l1.size() <<endl;
    l1.resize(8,100);//l1.resize(8) will resize to 8 and new elements will be initialzed to 0
    cout << "****Up size****" << endl;
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;


    l1.resize(4);
    cout << "****Down size****" << endl;
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;

    l1.clear();

    cout << "Is L1 empty " << l1.empty() << " Size to verify " <<l1.size()<< endl;


    /*Push and Pop operation*/

    for (auto i = 0; i < 5;i++)
    {
        l1.push_back(i);// can use emplace_back()
    }

    cout << "After Push back";

    for (auto it : l1)
    {
        cout <<" " << it;
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        l1.push_front(i+5); // emplace_front() 
    }

    cout << "After Push front";

    for (auto it : l1)
    {
        cout << " " << it;
    }
    cout << endl;
    /*Pop operation*/

    for (auto i = 0; i < 5; i++)
    {
        l1.pop_back();
    }

    cout << "After Pop back Five Times";

    for (auto it : l1)
    {
        cout << " " << it;
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        l1.pop_front(); 
    }

    cout << endl;

    cout << "After Pop Front Back Five Times: ";

    for (auto it : l1)
    {
        cout << " " << it;
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        l1.push_front(i + 5); // emplace_front() 
    }

    /*Insert operations*/
    vector<int> v1{ 10,20,30,40,50 };

    l1.insert(l1.end(), 100); // to insert at in between use iterator and advance it's position

    cout << "After Single Insert " ;

    for (auto it : l1)
    {
        cout << " " << it;
    }
    cout << endl;

    l1.insert(l1.begin(), v1.begin(), v1.end()); // to insert at in between use iterator and advance it's position

    cout << "After Series Insert ";

    for (auto it : l1)
    {
        cout << " " << it;
    }
    cout << endl;

    /*Trying to insert in between*/
    int insert_flag = false;
    for (auto i = l1.begin(); i != l1.end(); i++)
    {
        
        if (i != l1.begin() && insert_flag==false)
        {
            insert_flag = true;
            i = l1.insert(i, v1.begin(), v1.end());
        }
    }
    for (auto it : l1)
    {
        cout << " " << it;
    }

    cout << endl;
    l1.insert(l1.end(), 20, 250);
    cout << "After Numerical insert ";
    for (auto it : l1)
    {
        cout << " " << it;
    }

    cout << endl;

    /*Erase*/

    l1.erase(l1.begin()); 



    cout << "After Single Erase"; 

    for (auto it : l1)
    {
        cout << " " << it;
    }
    cout << endl;
    auto it2 = l1.end();

    advance(it2, -20);

    l1.erase(it2, l1.end());//removing last 20 elements

    cout << "After Multiple erase ";
    for (auto it : l1)
    {
        cout << " " << it;
    }


    cout << endl;

    /*Swap operation*/

    list<int> l2{120,130,140,150};
    
    cout << "l1 before swap, Size"<<l1.size()<<" :";
    for (auto it:l1)
    { 
        cout <<" " << it;

    }
    cout << endl;

    cout << "l2 before swap, Size" << l2.size() << " :";
    for (auto it : l2)
    {
        cout <<" " << it;

    }

    l1.swap(l2);

    cout << "l1 after swap, Size" << l1.size() << " :";
    for (auto it : l1)
    {
        cout << " " << it;

    }
    cout << endl;

    cout << "l2 after swap, Size" << l2.size() << " :";
    for (auto it : l2)
    {
        cout << " " << it;

    }

    l1.swap(l2);


    cout << endl;
    /*Remove, Remove if, merge ,sort,reverse*/

    /* Removing all 50 from list*/

    l1.remove(50);

    cout << "After Removing 50: ";
    for (auto it : l1)
    {
        cout << " " << it;

    }

    cout << endl;

    /*Rule of making unique it must be sorted always*/

    l1.sort();
    l1.unique();
   

    cout << "Removing all duplicate elements and making it unique";

    for (auto it : l1)
    {
        cout << " " << it;

    }

    cout << endl;


    l1.remove_if(remove_even);

    /*Removing even from list*/

    cout << "Removing even number using remove_if";

    for (auto it : l1)
    {
        cout << " " << it;

    }
}