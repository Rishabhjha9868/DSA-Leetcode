class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int ans = 0,maxi = 0;
        for(int i =0; i< nums.size(); i++)
        {
           if(nums[i]==1){
                ans +=1;
               maxi = max(maxi,ans);
                } 
            else{
                ans = 0;
            }
        }
         
        return maxi;
    }
};