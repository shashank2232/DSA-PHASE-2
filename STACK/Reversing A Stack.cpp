// REVERSING A STACK
#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	// your code goes here
    string s = "shashank";
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        st.push(ch);
    }
    string ans = "";
    while(!st.empty())
    {
        char s = st.top();
        ans.push_back(s);
        st.pop();
    }
    cout<<ans<<endl;
	return 0;
}