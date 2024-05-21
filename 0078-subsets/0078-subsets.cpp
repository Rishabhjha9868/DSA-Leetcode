class Solution {
public:

    vector<vector<int>> ans;

    void helper(int pos, vector<int> v, vector<int> nums, vector<vector<int>>& ans){
        ans.push_back(v);
        for(int i = pos; i < nums.size(); i++){
            v.push_back(nums[i]);
            helper(i + 1, v, nums, ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        helper(0, {}, nums, ans);
        return ans;
    }
};