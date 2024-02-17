class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Initialize variables to store the first and last index of the target
        int fidx = -1;
        int lidx = -1;
        
        // Binary search to find the first occurrence of the target
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                // Update first index and continue searching in the left half
                fidx = mid;
                r = mid - 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        // Reset the search boundaries
        l = 0;
        r = nums.size() - 1;

        // Binary search to find the last occurrence of the target
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                // Update last index and continue searching in the right half
                lidx = mid;
                l = mid + 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return {fidx, lidx};
    }
};