// PRIORITY QUEUE (HEAP)
// Queue whose 1st element is always greatest (MAX HEAP) (greater to smaller)
// Queue whose 1st element is always smallest (MIN HEAP) (smaller to greater)
#include <iostream>
#include<queue>
using namespace std;

int main() {
	// MAX HEAP
    priority_queue<int> maxi;

    // MIN HEAP
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n = maxi.size();   
    // maxi.size() will keep changing inside the loop and because of it , we won't be able to print all elements
    // hence we store maxi.size() in a variable n to make each element print
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";      // will print element at the top
        maxi.pop();                 // will delete/remove it 
    }cout<<endl;
    // above loop will print the max heap(3,2,1,0)  (greater to smaller)
    cout<<"SIZE:"<<n<<endl;

    // MIN HEAP
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    // we store the size of heap in a variable because inside the loop after printing the element(top()) in the next line,
    // we are doing pop which after each iteration reduces the size of the heap due to which if we use i<mini.size(),
    // it won't print all the elements in the heap
    int m = mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    // above loop will print the min heap (0,1,3,4,5)  (smaller to greater)

    cout<<"IS MINI HEAP EMPTY? "<<mini.empty()<<endl;   // will give TRUE because our heap is empty now
    cout<<"IS MAXI HEAP EMPTY? "<<maxi.empty()<<endl;   // will give TRUE because our heap is empty now

	return 0;
}