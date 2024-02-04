class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++)
        {
            int temp=i;
            for(int j=i+1; j<n; j++)
            {
                if(nums[j]<nums[temp])
                {
                    temp = j;
                }
            }
            swap(nums[i], nums[temp]);
        }
    	
	int count; 
	for(int i=0; i<n; i++)
	{
		if(i==0||nums[i] != nums[i-1])
		{
			if(i==n-1||nums[i]!=nums[i+1])
			{
				count =nums[i];
				break;
			}
		}
	}return count;
    }
};