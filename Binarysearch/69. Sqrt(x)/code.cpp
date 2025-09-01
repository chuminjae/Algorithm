class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int mid = -1;
        while(start <= end){
            // Prevent overflow
            mid = start + (end - start) / 2;
            // Prevent overflow
            if((long) mid * mid < (long) x){
                start = mid + 1;
            }
            else if((long) mid * mid > (long) x){
                end = mid - 1;
            }
            else{
                return mid;
            }
        }
        // In this case return end since end guarantees that index > end, nums[end] < nums[mid]
        return end;
    }
// time compelexity: log(n)
};
