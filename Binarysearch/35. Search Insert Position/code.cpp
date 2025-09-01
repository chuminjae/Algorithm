class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // starting index shd be 0
        // end index shd be nums.size() -1 not nums.size()
        int start = 0;
        int end = nums.size() - 1;
        // Shd be equal or smaller
        // Need to consider the case when the algorithm considers the last remaining element
        // start: 0 end: 1 mid : 0
        // start: 1 end: 1 mid : 1
        // start :0 end: 0 mid: 0
        while(start <= end){
            // prevent overflow
            int mid = start + (end - start) / 2;
            // Need to cut in half 
            // It the condition of two element remaining 
            // if start = mid || end = mid, cause infinite loop.
            if(nums[mid] < target){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid -1;
            }
            else{
                return mid;
            }
        }
        // Three cases
        // a b 
        // If x <= a, insert p1. If x> a && x <=b, insert p2. If x > b, insert p3.
        // All three cases show that when the target is smaller than the current value, the target should be inserted infront of the current value.
        // Start index only moves when nums[mid] is smaller than the target. Safe to assume that if index < start nums[index] < nums[mid].
        // Therefore, return start.
        return start;
    }
};
