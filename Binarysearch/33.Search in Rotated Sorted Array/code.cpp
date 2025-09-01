class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = -1;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(nums[mid] == target){
                return mid;
            }
            // left part is sorted
            // Need to consider when nums[mid] == nums[start]
            else if(nums[mid] >= nums[start]){
                if(nums[mid] > target && nums[start] <= target){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            // right part is sorted
            else{
                if(nums[end] >= target && nums[mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
