// STL ALGORITHMS
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	// your code goes here
    // BINARY SEARCH
    // FOR ARRAY
    int n=5;
    int arr[n] = {1,2,3,4,5};
    cout<<"FINDING IN ARRAY:"<<binary_search(arr,arr+n,3)<<endl;

    // FOR VECTOR
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<"FINDING IN VECTOR:"<<binary_search(v.begin(),v.end(),30)<<endl;

    // LOWER BOUND
    cout<<"LOWER BOUND:"<<lower_bound(v.begin(),v.end(),12)-v.begin()<<endl;

    // UPPER BOUND
    cout<<"UPPER BOUND:"<<upper_bound(v.begin(),v.end(),43)-v.begin()<<endl;

    // to get MAX,MIN
    int a=8;
    int b=3;
    cout<<"VALUE OF A:"<<a<<" "<<endl<<"VALUE OF B:"<<b<<endl;
    cout<<"MAX:"<<max(a,b)<<endl;
    cout<<"MIN:"<<min(a,b)<<endl;

    // SWAPPING
    swap(a,b);
    cout<<"VALUE OF A AFTER SWAPPING:"<<a<<" "<<endl<<"VALUE OF B AFTER SWAPPING:"<<b<<endl;

    // REVERSING A STRING
    string s = "shashank";
    reverse(s.begin(),s.end());
    cout<<"REVERSED STRING: "<<s<<endl;

    // ROTATE
    vector<int> r;
    r.push_back(45);
    r.push_back(32);
    r.push_back(106);
    r.push_back(97);
    r.push_back(80);
    // rotate(r.begin(),r.begin()+1,r.end());
    // for(int x:r)
    // {
    //     cout<<x<<" ";
    // }cout<<endl;

    // SORT
    sort(r.begin(),r.end());
    // sort is made by combination of 3 algorithms:  1. QUICK SORT  2. HEAP SORT  3. INSERTION SORT
    // TIME: 0(NlogN)
    for(int x:r)
    {
        cout<<x<<" ";
    }cout<<endl;

	return 0;
}