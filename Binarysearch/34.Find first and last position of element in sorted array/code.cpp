class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = -1;
        bool check = false;
        vector<int> a;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target) {
                    check = true;
                }
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // If true, push start.
        // start is the index where the condition holds:
        // If true, idx < start, nums[idx] < target
        if (check) {
            a.push_back(start);
        } else {
            a.push_back(-1);
        }
        start = 0;
        end = nums.size() - 1;
        check = false;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] <= target) {
                if (nums[mid] == target) {
                    check = true;
                }
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        // If true, push end.
        // end is the index where the condition holds:
        // If true, idx > end, nums[idx] > target
        if (check) {
            a.push_back(end);
        } else {
            a.push_back(-1);
        }
        return a;
    }
};
