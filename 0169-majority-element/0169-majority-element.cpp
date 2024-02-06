class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
	int n = nums.size();
	for(int i=0; i<n; i++)
	{
		int count = 0 ;
		for(int j=i; j<n; j++)
		{
			if(nums[i]==nums[j])
			{
				count = count +1;
			}
			else{
				break;
			}
		}
		if(count>(n/2))
			return nums[i];
		
	}return {};
    }
};