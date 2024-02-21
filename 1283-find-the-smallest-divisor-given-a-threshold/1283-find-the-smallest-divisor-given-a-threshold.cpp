int findmax(vector<int>& nums){
    int maxi = INT_MIN;
    for(int i=0; i<nums.size(); i++)
    {
      maxi = max(maxi, nums[i]);
     }
    return maxi;
}

int calculate(vector<int>& nums, int x)
    {
     int calc = 0;
    for(int i=0; i<nums.size(); i++)
    {
       calc = calc + ceil((double)nums[i]/(double)x); 
    }
    return calc;
    }

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int low = 1, high = findmax(nums); 
        while(low <= high)
        {
            int mid  = low + (high-low)/2;
            int calcul = calculate(nums, mid);
            if(calcul <= threshold){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};