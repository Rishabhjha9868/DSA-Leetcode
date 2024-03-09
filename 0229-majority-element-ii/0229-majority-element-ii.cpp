class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {
		vector<int>ans;
		unordered_set<int>s;
		for(int i=0;i<nums.size();i++){
			int count=0;
			for(int j=0;j<nums.size();j++){
				if(nums[i]==nums[j])count++;
			}
			if(count>nums.size()/3)s.insert(nums[i]);
		}
		for(auto i:s)ans.push_back(i);
		return ans;
	}
};