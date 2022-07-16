// MAP STL (key-value pair)    all keys are different
// MAP give elements in SORTED ORDER.
// UNORDERED_MAP give elements in RANDOM ORDER.
#include <iostream>
#include<map>
using namespace std;

int main() {
	map<int,string> m;
    m[1] = "shashank";
    m[2] = "mishra";
    m[13] = "coder";
    m.insert({5,"hello"});
    for(auto i:m)
    {
        cout<<i.first<<"->"<<i.second;
        cout<<endl;
    }

    // will always come in SORTED ORDER
    // to print only the keys
    cout<<"KEYS ARE:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" ";
    }cout<<endl;

    // will always come in SORTED ORDER
    // to print only the values
    cout<<"VALUES ARE:"<<endl;
    for(auto i:m)
    {
        cout<<i.second<<" ";
    }cout<<endl;

    // ANOTHER WAY OF INSERTING KEYS,VALUES IN THE MAP
    // m.insert({5,"hello"});

    cout<<"FINDING 13:"<<m.count(13)<<endl;     // if 1 present , if 0 absent
    cout<<"FINDING -13:"<<m.count(-13)<<endl;

    // printing before ERASE()
    cout<<"BEFORE ERASE()"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<" ";
    }cout<<endl;
    m.erase(13);    // will delete key,value  13,coder
    cout<<"AFTER ERASE() 13"<<endl;
    // printing after ERASE()
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<" ";
    }cout<<endl;

    // TIME COMPLEXITY: insert() erase() find() count() in case of MAP = 0(logN)
    // TIME COMPLEXITY: in unordered_map = 0(1)

    // FIND() returns iterator of that element
    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }


	return 0;
}