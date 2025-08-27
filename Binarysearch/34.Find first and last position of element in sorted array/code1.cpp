class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        a.push_back(binarySearch(true, nums, target));
        a.push_back(binarySearch(false, nums, target));
        return a;
    }
    int binarySearch(bool check, vector<int> &nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int mid = -1;
        int idx = -1;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(nums[mid] > target){
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                idx = mid;
                if(check){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
        }
        return idx;
    }
};
