// SET STL
// ONLY UNIQUE ELEMENTS ARE STORED, EACH ELEMENT IS STORED ONLY ONCE NO MATTER HOW MUCH TIMES IT IS PRESENT
// NO MODIFICATION, EITHER INSERT/DELETE
// Elements are returned in SORTED ORDER
// UNORDERED_SET give elements in RANDOM ORDER and set is a bit slow than unordered_set
#include <iostream>
#include<set>
using namespace std;

int main() {
	set<int> s;
    // no matter how many times you insert same element, SET will take it ONLY ONCE.
    // TIME COMPLEXITY FOR INSERT : 0(logN)
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    // printing set will give elements in a SORTED ORDER
    for(int x:s)
    {
        cout<<x<<" ";       // will print in SORTED ORDER (0,1,5,6)
    }cout<<endl;

    // s.erase(s.begin());        // will delete 1st element
    // for(int x:s)
    // {
    //     cout<<x<<" ";       // will print after deleting 1st element i.e. 0
    // }cout<<endl;

    // to delete element at a particular position
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);           // will delete element at 2nd position i.e. 1
    for(int x:s)
    {
        cout<<x<<" ";
    }cout<<endl;     

    cout<<"ELEMENT IS PRESENT/NOT:"<<s.count(5)<<endl;    // if 1 means present, if 0 means absent
    cout<<"ELEMENT IS PRESENT/NOT:"<<s.count(-5)<<endl;    

    set<int>::iterator itr = s.find(5);             // will return iterator of 5
    cout<<"VALUE OF ITR:"<<*it<<endl;


    // TIME COMPLEXITY OF:  insert() , find() , erase() , count()   is 0(logN)
    // TIME COMPLEXITY OF:  size() , begin() , empty() , end()   is 0(1)

	return 0;
}