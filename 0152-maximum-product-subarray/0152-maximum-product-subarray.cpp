class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0], mult;
        for(int i=0;i<nums.size();i++)
        {
            mult= nums[i];
            maxi = max(maxi,mult);
            for(int j= i+1;j<nums.size();j++)
            {
                mult *= nums[j];
                maxi= max(maxi,mult);
            }
        }
        return maxi;
    }
};