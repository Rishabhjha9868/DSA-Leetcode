class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         sort( nums.begin(), nums.end() );
        int n = nums.size();
        int small = 1;
        for (int i = 0; i<n; i++) {
            if (nums[i] > 0 && small == nums[i]) {
                small++;
            }
        }
        return small;
    }
};