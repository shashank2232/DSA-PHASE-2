// Reverse Stack Using Recursion
void insertAtBottom(stack<int> &stack,int rem)
{
    // base case
    if(stack.empty())
    {
        stack.push(rem);
        return;
    }
    // rec call
    int rem2 = stack.top();
    stack.pop();
    insertAtBottom(stack,rem);
    stack.push(rem2);
}
void reverseStack(stack<int> &stack) {
    // base case 
    if(stack.empty())
    {
        return;
    }
    // rec case
    int rem = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,rem);
}

// INPUT : 2,1,3     
// OUTPUT: 2,1,3

// INPUT : 1,2,3,4,5
// OUTPUT: 1,2,3,4,5