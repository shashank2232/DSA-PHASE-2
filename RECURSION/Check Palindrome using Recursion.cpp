// check palindrome using recursion   (2-ptr approach)
#include <iostream>
#include<string>
using namespace std;
bool checkPal(string name,int i,int j)
{
	// base case , if i crosses j means all characters have been checked and its a palindrome
	if(i>j)
	{
		return true;
	}
	// rec case
	// put 1st ptr i.e. i at 0 and j at last element,keep matching both and move i forward,j backward
	// if both come equal everytime means its palindrome else not a palindrome
	if(name[i]!=name[j])
	{
		return false;
	}
	else{
		return checkPal(name,i+1,j-1);
	}
}
int main() {
	// your code goes here
	string name = "nitin";
	
	bool answer=checkPal(name,0,name.length()-1);
	if(answer==true)
	{
		cout<<"PALINDROME";
	}
	else{
		cout<<"NOT A PALINDROME";
	}
	return 0;
}

// TIME: O(n)   SPACE: O(1)