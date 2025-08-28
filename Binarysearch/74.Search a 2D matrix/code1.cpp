class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r_start = 0;
        int r_end = matrix.size() - 1;
        int c_start = 0;
        int c_end = matrix[0].size() - 1;
        int row = -1;
        int mid = -1;
        while(r_start <= r_end){
            mid = r_start + (r_end - r_start) / 2;
            if(matrix[mid][0] <= target && matrix[mid][matrix[mid].size() - 1] >= target){
                row = mid;
                break;
            }
            else if(matrix[mid][0] > target){
                r_end = mid - 1;
            }
            else{
                r_start = mid + 1;
            }
        }
        if(row == -1){
            return false;
        }
        while(c_start <= c_end){
            mid = c_start + (c_end - c_start) / 2;
            if(matrix[row][mid] > target){
                c_end = mid - 1;
            }
            else if(matrix[row][mid] < target){
                c_start = mid + 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
