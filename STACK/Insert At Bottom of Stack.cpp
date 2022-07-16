// BACKTRACKING
// Insert An Element At Its Bottom In A Given Stack
void solve(stack<int>& s,int x)
{
    // base case  (when stack becomes empty means we are at bottom of stack,simply insert x and return)
    if(s.empty())
    {
        s.push(x);
        return;
    }
    // rec case  (take the top,store it then pop it and make a recursion call for the rest , then while coming back when x is inserted simply insert those elements taken out earlier)
    int rem = s.top();
    s.pop();
    solve(s,x);
    s.push(rem);
    
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}

// INPUT : x = 5 , stack = 6,2,4,9
// OUTPUT : 5,6,2,4,9

// INPUT : x = 8 , stack = 4,3,2
// OUTPUT : 8,4,3,2