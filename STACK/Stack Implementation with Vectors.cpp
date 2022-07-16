// Stack Implementation with VECTORS
#include <iostream>
#include<vector>
using namespace std;

class Stack{
    private:
    vector<int> v;
    public:
    // insertion
    void push(int data)
    {
        v.push_back(data);
    }
    // checking for empty
    bool empty()
    {
        return v.size()==0;   // will return true if stack is empty otherwise false
    }
    // deletion
    void pop()
    {
        if(!empty())               // can only delete something from stack if it isn't empty
        {
        v.pop_back();
        }
    }
    // to get the topmost element of stack
    int top()
    {
        return v[v.size()-1];               // -1 is done because of 0th indexing
    }
};
int main() {
	// your code goes here
    Stack s;
    // filling the stack
    for(int i=1;i<=5;i++)
    {
        s.push(i*i);
    }
    // printing & deleting elements consecutively
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
	return 0;
}