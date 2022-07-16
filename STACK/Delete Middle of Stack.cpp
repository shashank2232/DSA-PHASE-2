// BACKTRACKING
void solve(stack<int>&inputStack,int count,int size)
{
    // base case (if count==size/2 means we are at our middle of stack,just simply delete it)
    if(count == size/2)
    {
        inputStack.pop();
        return;
    }
    // rec case (first take the top & store it somewhere,now remove/pop it)
    int rem = inputStack.top();
    inputStack.pop();
    
    solve(inputStack,count+1,size);    // now use recursion for rest incrementing count
    
    inputStack.push(rem);    // while coming back after deletion,insert the elements removed earlier back to their positions
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int count = 0;
    solve(inputStack,count,N);
   
}