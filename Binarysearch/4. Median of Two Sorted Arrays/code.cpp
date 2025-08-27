class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // nums1.size() should be smaller than nums2
        // nums1 is the standard
        if(nums1.size() > nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }
        else{
            int len1 = nums1.size();
            int len2 = nums2.size();
            int start = 0;
            int end = nums1.size();
            int mid1 = -1;
            int mid2 = -1;
            int total_length = len1 + len2;
            while(start <= end){
                mid1 = start + (end - start) / 2;
                mid2 = (total_length + 1) / 2 - mid1;
                int left_max1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
                int left_max2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
                int right_min1 = (mid1 == nums1.size()) ? INT_MAX : nums1[mid1];
                int right_min2 = (mid2 == nums2.size()) ? INT_MAX : nums2[mid2];
                if(left_max1 <= right_min2 && left_max2 <= right_min1){
                    if((len1 + len2) % 2 == 0){
                        return ((double)max(left_max1, left_max2) + min(right_min1, right_min2)) / 2;
                    }else{
                        return (double)(max(left_max1, left_max2));
                    }
                }
                else if(left_max1 > right_min2){
                    end = mid1 - 1;
                }
                else{
                    start = mid1 + 1;
                }
            }
        }
        return -1;
    }
};
