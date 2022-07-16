// Next Smaller Element
vector<int> help_classmate(vector<int> arr, int n) 
    { 
     stack<int>s;
    s.push(-1);    // at starting stack will have -1
    vector<int>ans(n);
    // traversing from RIGHT TO LEFT
    for(int i=n-1;i>=0;i--)
    {
        int current = arr[i];
        // till our top of stack is greater than current,just pop it,as we need smaller element
            while(s.top()>=current)
            {
                s.pop();
            }
        // coming out of while loop, we have our answer in s.top()
        // put it in vector ans
        ans[i] = s.top();
        // now just push current in stack for next remaining part
        s.push(current);
    }
    return ans;
    } 

// NOTE: If it would be Next Greater Element, iteration will be from LEFT TO RIGHT

// Input: N = 5, arr[] = {3, 8, 5, 2, 25}
// Output: 2,5,2,-1,-1

// Input: N = 4, arr[] = {1, 2, 3, 4}
// Output: -1,-1,-1,-1