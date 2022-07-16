// QUEUE STL       FIFO(FIRST IN FIRST OUT)
#include <iostream>
#include<queue>
using namespace std;

int main() {
	// your code goes here
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"FIRST ELEMENT:"<<q.front()<<endl;
    cout<<"SIZE BEFORE POP():"<<q.size()<<endl;
    q.pop();             // will remove 1
    cout<<"FIRST ELEMENT AFTER USING POP():"<<q.front()<<endl;

    cout<<"SIZE AFTER POP():"<<q.size()<<endl;

	return 0;
}