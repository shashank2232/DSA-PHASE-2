// TOTAL WAYS TO REACH Nth STAIR
#include <iostream>
using namespace std;
int totalStairWays(int n)
{
    // base case
    if(n<0)              // means we are below 0th stair and there is no way , so return 0
    {
        return 0;
    }
    if(n==0)            // means we are at our 0th stair and there's only 1 way
    {
        return 1;
    }

    // rec case
    // as we can only either take step of 1 or 2 , and since we need total ways so we add them
    return totalStairWays(n-1)+totalStairWays(n-2);
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    cout<<"TOTAL WAYS TO REACH Nth STAIR FROM 0th STAIR: "<<totalStairWays(n);
	return 0;
}