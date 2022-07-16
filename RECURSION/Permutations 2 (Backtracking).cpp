// PERMUTATIONS-2 (there should be no DUPLICATES in answer)
// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
class Solution {
 void solve(int index,vector<vector<int>>&ans,vector<int>nums)
    {
        // base case(when index reaches out of vector,insert it in answer & return for another solution)
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
     unordered_set<int> s;
        for(int i=index;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                continue;
            }
            s.insert(nums[i]);
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

// Input: nums = [1,1,2]    Output:[[1,1,2],[1,2,1], [2,1,1]]
// Input: nums = [1,2,3]    Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]