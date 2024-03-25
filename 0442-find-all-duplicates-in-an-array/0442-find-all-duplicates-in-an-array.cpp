class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> p;
        int n= nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1;i++)
        {
            if(nums[i]==nums[i+1]){
                p.push_back(nums[i]);
                i=i+1;
            }
        }
        return p;
    }
};