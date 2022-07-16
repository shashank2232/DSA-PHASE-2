// power of a number using recursion  
#include <iostream>
using namespace std;
int powerUsingRec(int a,int b)
{
    // base case (if b i.e. power = 0,return 1 OR if b is 1 return a itself)
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    // rec case
    // first it will break down b by 2 till it reaches base case, 
    // then it will check for odd and even and will execute accordingly
    int ans=powerUsingRec(a,b/2);
    // if b is even return just return ans*ans and if b is odd return a*ans*ans
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main() {
	// your code goes here
    int a,b;
    cin>>a>>b;
    int answer=powerUsingRec(a,b);
    cout<<"POWER IS:"<<answer;
	return 0;
}