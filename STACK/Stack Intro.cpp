#include <iostream>
#include<stack>
using namespace std;

int main() {

    // CREATING STACK AND PERFORMING ITS OPERATIONS
    
	// creation of stack
    /*
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // deletion
    s.pop();
    cout<<"Printing top element:"<<s.top()<<endl;     // to get the topmost element i.e. 2 in this case as 3 got deleted because of s.pop()

    if(s.empty())
    cout<<"Stack is empty"<<endl;
    else
    cout<<"Stack is not empty"<<endl;

    // Size of stack
    cout<<"Size of stack:"<<s.size()<<endl;
    */
    stack<int> s;
    for(int i=1;i<=5;i++)
    {
        s.push(i);
    }
    // printing and deleting/removing elements one by one
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
	return 0;
}
