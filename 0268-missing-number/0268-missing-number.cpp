class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        for(int i=0; i<n-1; i++)
        {
            int min = i;
            for(int j=i+1; j<n; j++)
            {
                if(nums[min]>nums[j])
                {
                min =j;
                }
            }swap(nums[i], nums[min]);
        }
         
        int count;
        for(int i=0; i<n; i++)
        {
           if(i!= nums[i]){
            count = i; 
            break;
           }
        }return count;
    }
};