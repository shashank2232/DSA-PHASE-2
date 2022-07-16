// VALID PARENTHESES
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            // for opening bracket
            if(ch=='(' || ch=='{' || ch=='[') 
            {
                st.push(ch);                   // for opening bracket,simply insert it in stack st
            }
            // for closing bracket
            else{
               if(!st.empty())           // WE HAVE TO CHECK FOR THIS AS IF STACK IS EMPTY,WE CAN'T GET THE TOP
               {
                   char top = st.top();    // if top will have a corresponding opening bracket,just pop it
                 if((ch=='}' && top=='{') || (ch==']' && top=='[') || (ch==')' && top=='('))   // if for a closing bracket we have an corresponding opening bracket,just simply pop it.
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
                else{
                    return false;
                }
        }
        }
        
        
        if(st.empty())               // at the end if stack is empty means each bracket had a pair & its a BALANCED PARENTHESES, true
            return true;
        else
            return false;
    }
};


// Input:
// {([])}
// Output: 
// true

// Input: 
// ()
// Output: 
// true

// Input: 
// ([]
// Output: 
// false