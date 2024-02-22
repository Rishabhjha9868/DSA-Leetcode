#include <bits/stdc++.h>

int countstudents(vector<int>& nums, int pages){
int students = 1;
    long long pagestudents =0;
    for(int i=0 ; i<nums.size(); i++)
    {
        if(pagestudents + nums[i] <= pages){
            pagestudents += nums[i];
        }
        else{
                students = students +1;
            pagestudents = nums[i];
            }
    }
    return students;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size())return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            int students = countstudents(nums, mid); 
            if(students > k){
                low  = mid +1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};