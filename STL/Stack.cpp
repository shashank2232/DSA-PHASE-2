// STACK STL
#include <iostream>
#include<stack>
using namespace std;

int main() {
	// your code goes here
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    // will give topmost element i.e. 5 as 5 is pushed into the stack at the last (LAST IN FIRST OUT)
    cout<<"TOPMOST ELEMENT:"<<s.top()<<endl;

    // to delete 
    s.pop();             // will delete element at the TOP i.e. 5
    cout<<"TOPMOST ELEMENT AFTER USING POP():"<<s.top()<<endl;

    cout<<"SIZE OF STACK:"<<s.size()<<endl;

    cout<<"EMPTY OR NOT:"<<s.empty()<<endl;
	return 0;
}
