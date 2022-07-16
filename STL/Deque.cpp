// DEQUE STL
#include <iostream>
#include<deque>
using namespace std;

int main() {
	// your code goes here
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // will print 2,1 as first we inserted 1 then inserted 2 at the front
    for(int x:d)
    {
        cout<<x<<" ";
    }cout<<endl;

    // POP_BACK()
    // d.pop_back();
    // will print 2 as because of pop_back 1 has been deleted(pop_back deletes element from the last)
    // for(int x:d)
    // {
    //     cout<<x<<" ";
    // }cout<<endl;
     
    // POP_FRONT() 
    // d.pop_front();
    // will print 1 as pop_front will delete element from the front
    // for(int x:d)
    // {
    //     cout<<x<<" ";
    // }cout<<endl;

    cout<<"ELEMENT AT FIRST INDEX:"<<d.at(1)<<endl;     // will give element at 1st index i.e. 1

    cout<<"FRONT ELEMENT IS:"<<d.front()<<endl;
    cout<<"LAST ELEMENT IS:"<<d.back()<<endl;

    // to check if it's EMPTY OR NOT
    cout<<"EMPTY OR NOT:"<<d.empty()<<endl;

    // to get SIZE
    cout<<"SIZE IS:"<<d.size()<<endl;

    // to DELETE first element 
    d.erase(d.begin(),d.begin()+1);      // to delete first element (begin(),begin()+1)
    cout<<"SIZE IS:"<<d.size()<<endl;
    // printing it after deleting 
    for(int x:d)
    {
        cout<<x<<" ";
    }cout<<endl;

	return 0;
}