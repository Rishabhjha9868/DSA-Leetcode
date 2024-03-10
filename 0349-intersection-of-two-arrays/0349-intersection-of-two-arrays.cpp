class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        set<int>s;
        int m = nums2.size(), n = nums1.size();
        for(int i=0; i<n; i++){
            for(int j =0;j<m; j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums1[i]);
                    break;
                }
            }
        }
        for(auto st:s){
            ans.push_back(st);
        }
        return ans;
    }
};
