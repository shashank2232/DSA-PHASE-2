// FIRST,LAST AND ALL OCCURENCES OF AN ELEMENT IN ARRAY (RECURSION)
#include <iostream>
using namespace std;
int firstOcc(int arr[],int n,int key)
{
    // base case
    if(n==0)
    {
        return -1;
    }

    // rec case
    if(arr[0]==key)
    {
        return 0;
    }
    int subIndex=firstOcc(arr+1,n-1,key);            // storing index of element in a variable subIndex
    // if subIndex!=-1 means element is present in array, just return subIndex+1 to get it's original index in the array
    if(subIndex!=-1)                               
    {
        return subIndex + 1;
    }
    return -1;
}
int lastOcc(int arr[],int n,int key)
{
    // base case
    if(n==0)
    {
        return -1;
    }
    
    // rec case 
    int subindex=(arr+1,n-1,key);
    if(subindex==-1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return subindex+1;
    }
}
void allOcc(int arr[],int i,int n,int key)
{
    // base case
    if(i==n)
    {
        return;
    }

    // rec case
    if(arr[i]==key)
    {
        cout<<i<<" ";
    }
    allOcc(arr,i+1,n,key);
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
    // cout<<"FIRST OCCURENCE AT:"<<firstOcc(arr,n,key);
    // cout<<endl;
    cout<<"LAST OCCURENCE AT:"<<lastOcc(arr,n,key);
    cout<<endl;
    cout<<"ALL OCCURENCES: ";
    allOcc(arr,0,n,key);
	return 0;
}