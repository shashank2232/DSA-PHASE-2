// BINARY SEARCH USING RECURSION
#include <iostream>
using namespace std;
int binarySearchUsingRec(int arr[],int n,int key,int start,int end)
{
    int mid= start+(end-start)/2;
    // base case
    if(arr[mid]==key)
    {
        return mid;
    }
    if(start>end)
    {
        return -1;
    }
    // rec case
    
    if(arr[mid]>key)
    {
        return binarySearchUsingRec(arr,n,key,start,mid-1);
    }
    else{
        return binarySearchUsingRec(arr,n,key,mid+1,end);
    }
    
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans=binarySearchUsingRec(arr,n,key,0,n-1);
    cout<<ans;
	return 0;
}