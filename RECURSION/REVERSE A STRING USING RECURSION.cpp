// REVERSE A STRING USING RECURSION
#include <iostream>
#include<string>
using namespace std;
// function call will contain &str i.e. means it will pass as reference which will do changes in the original string only instead 
// of a copy string which was done during pass by value
void reverseStringUsingRecursion(string &str,int i,int j)
{
    // base case
    if(i>j)
    {
        return;
    }
    // rec case
    swap(str[i],str[j]);
    i++;
    j--;
    reverseStringUsingRecursion(str,i,j);
}
int main() {
	// your code goes here
    string name = "shashank";
    reverseStringUsingRecursion(name,0,name.length()-1);
    cout<<name;

	return 0;
}