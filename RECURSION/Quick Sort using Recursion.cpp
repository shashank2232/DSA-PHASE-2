//QUICK SORT  (take a pivot,put smaller elements than it on one side and greater elements on other side, and then SORT)
#include <iostream>
#include<vector>
using namespace std;
 //array is passed by reference to make no changes in original array
int partition(vector<int>&arr,int start,int end)     //this will put lesser elements than pivot in one side(left) and greater elements than pivot in other side(right)
{
    int i=start-1;
    int pivot=arr[end];
    for(int j=start;j<end;j++)        //j goes from start to end-1,as there is pivot at end,with which comparison of arr[j] will be done
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}
void quickSort(vector<int>&arr,int start,int end)      //array is passed by reference to make no changes in original array
{
    //base case (if there are only 1 or 0 elements,return)
    if(start>=end)                  //when start reaches the end(1 element remaining) or crosses the end(0 elements remaining),return back
    {
        return;
    }
    //Rec case (first put lesser elements than pivot in left and greater in the right,then recursively sort them)
    int p=partition(arr,start,end);          //gives the pivot point
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
	return 0;
}