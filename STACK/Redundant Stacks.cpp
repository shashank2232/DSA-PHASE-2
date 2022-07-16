// Redundant Brackets
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        // if ch is a opening bracket or an operation,insert it into stack
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            st.push(ch);
        }
        else       // ch is a closing bracket
        {
            if(ch==')')                // checking this so as there could be letters also present
            {
                bool isRedundant = true;
                while(st.top()!='(')          // till we don't get an opening bracket for our closing bracket
                {
                    char top = st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/')  // if an operation lies between closing & opening bracket, means its not redundant
                    {
                        isRedundant = false;
                    }
                    st.pop();               // doing this for going onto next character & checking it
                }
                if(isRedundant==true)       // means we got our opening bracket
                    return true;
                st.pop();                  // just pop opening bracket & move onto next character     
            } 
        }
    }
    return false;
}


// INPUT :  (a+b)
// OUTPUT : false

// INPUT :  (a+c*b)+(c))
// OUTPUT :  true