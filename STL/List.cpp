// LIST STL
#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int x:l)
    {
        cout<<x<<" ";
    }cout<<endl;

    cout<<"ELEMENT AT FRONT:"<<l.front()<<endl;
    cout<<"ELEMENT AT BACK:"<<l.back()<<endl;
    cout<<"SIZE:"<<l.size()<<endl;

    // BEFORE ERASING
    for(int x:l)
    {
        cout<<x<<" ";
    }cout<<endl;

    // AFTER ERASING
    // l.erase(l.begin());      // will delete the element at the beginning i.e. 2
    // for(int x:l)
    // {
    //     cout<<x<<" ";
    // }cout<<endl;

    // to delete whole list
    // l.erase(l.begin(),l.end());

    // TO COPY THIS LIST INTO A NEW LIST
    list<int> n(l);
    for(int x:n)
    {
        cout<<x<<" ";
    }cout<<endl;

    // INITIALIZING LIST
    list<int> m(5,10);           // list m will have 5 elements with value as 10 each
    for(int x:m)
    {
        cout<<x<<" ";
    }cout<<endl;
    
	return 0;
}