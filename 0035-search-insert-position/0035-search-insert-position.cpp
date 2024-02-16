class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s= 0 , e = n -1;
        int mid = 0;
        int ans = -1;
        while(s <= e)
        {
            mid = (s+e)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid]<target)
            {
                s = mid + 1;
            }
            else{
                e = mid  - 1;
                ans = mid;
            }
        }
        if(ans == -1)
        {
            ans = n;
        }
        return ans;
    }
};