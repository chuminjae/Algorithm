class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = -1;
        // Even if it is rotated, if the left part is not sorted, the right part is sorted.
        // If the right part is sorted, the left part is sorted.
        while(start <= end){
            mid = start + (end - start) / 2;
            if(nums[mid] == target){
                return mid;
            }
            // left part is sorted
            else if(nums[mid] > nums[start]){
                // check if target is in the left part.
                if(nums[mid] > target && nums[start] <= target){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            // right part is sorted
            else{
                // check if target is in the right part.
                if(nums[end] >= target && nums[mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
        // time complexity: log(n)
    }
};
