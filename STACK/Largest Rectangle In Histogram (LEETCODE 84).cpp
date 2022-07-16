// LARGEST RECTANGLE IN HISTOGRAM 
// Given an array of integers heights representing the histogram's bar height 
// where the width of each bar is 1, return the area of the largest rectangle in the histogram.
class Solution {
    vector<int>nextSmallerElement(vector<int>arr,int n)   // to get vector of all next smaller elements
    {
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            int curr = arr[i];
            while(s.top()!=-1 && arr[s.top()] >= curr)    // as arr[-1] isn't possible
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);               // because we need the index not the number present there
        }
        return ans;
    }
    vector<int>prevSmallerElement(vector<int>arr,int n)    // to get vector of all previous smaller elements
    {
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=0;i<n;i++)
        {
            int curr = arr[i];
            while(s.top()!=-1 && arr[s.top()] >= curr)     // as arr[-1] isn't possible
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);           // because we need the index not the number present there
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights,n);
        
        vector<int> prev(n);
        prev = prevSmallerElement(heights,n);
        
        int area = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            int length = heights[i];             
            // if we are at last element OR we don't have a smaller element to next,i.e. towards RIGHT,put next[i] as n
            if(next[i]==-1)                   
            {
                next[i]=n;
            }
            // formula of getting breadth [ (index of next smaller element) - (index of prev smaller element) - 1 ]
            int breadth = next[i] - prev[i] - 1;         
            int newArea = length * breadth;
            area = max(area,newArea);           // as we need the maximum area
        }
        return area;
    }
};


// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.

// Input: heights = [2,4]
// Output: 4