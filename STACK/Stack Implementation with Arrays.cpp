// Stack Implementation Using ARRAYS
#include <iostream>
using namespace std;

class Stack{
    // properties
    public:
    int *arr;
    int size;
    int top;

    // Constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // now we have to create 4 functions : push , pop , top , empty

    void push(int element)
    {
        if(size - top > 1)                // if there's space then only we'll insert an element
        {
            top++;                        // move top one step ahead
            arr[top] = element;           // inserting the element at top
        }
        else{
            cout<<"STACK OVERFLOW!"<<endl;    // if space isn't available
        }
    } 

    void pop()
    {
        if(top>=0)                                // we'll check if there's an element only then we'll delete it
        {
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW!"<<endl;           // as we can't delete from an empty stack
        }
    }

    int peek()
    {
        if(top>=0) {                          // we'll return topmost element if there is one
        return arr[top];
        }
        else{
            cout<<"STACK IS EMPTY!"<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        return true;
        else
        return false;
    }

};


int main() {
	// your code goes here
    Stack s(5);
    s.push(22);
    s.push(43);
    s.push(44);
    cout<<s.peek()<<endl;                 // top is 44
    s.pop();
    cout<<s.peek()<<endl;                 // top is 43
    s.pop();
    cout<<s.peek()<<endl;                 // top is 22
    s.pop();
    cout<<s.peek()<<endl;                 // stack is empty hence -1

    if(s.isEmpty())
    {
        cout<<"STACK IS EMPTY!"<<endl;
    }
    else{
        cout<<"NOT EMPTY!"<<endl;
    }
    s.push(01);
    if(s.isEmpty())
    {
        cout<<"STACK IS EMPTY!"<<endl;
    }
    else{
        cout<<"NOT EMPTY!"<<endl;
    }
	return 0;
}