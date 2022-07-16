// BUBBLE SORT USING RECURSION
#include <iostream>
using namespace std;
void bubbleSortUsingRec(int arr[],int n)
{
    // base case (if size of our array is either 1 or 0 means array is sorted,return)
    if(n==0 || n==1)
    {
        return;
    }
    // rec case
    // i=0;i<n-1;i++  as we are checking arr[i] with arr[i+1],otherwise we'll go
    // out from the last element and at arr[n-1] we won't be able to check with arr[n] 
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSortUsingRec(arr,n-1);
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
    bubbleSortUsingRec(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

	return 0;
}