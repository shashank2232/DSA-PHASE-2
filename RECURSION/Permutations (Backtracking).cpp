// PERMUTATIONS
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
class Solution {
 void solve(int index,vector<vector<int>>&ans,vector<int>nums)
    {
        // base case(when index reaches out of vector,insert it in answer & return for another solution)
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            solve(index+1,ans,nums);
            swap(nums[index],nums[i]);    // BACKTRACKING STEP
        }

}
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(index,ans,nums);
        return ans;
    }
};

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]

// Input: nums = [1]
// Output: [[1]]