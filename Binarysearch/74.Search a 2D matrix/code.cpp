class Solution {
public:
// consider the 2D array as a 1D array.
// Still log(n)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix.size() * matrix[0].size() - 1;
        int mid = -1;
        while(start <= end){
            mid = start + (end - start) / 2;
            pair<int, int> position = convert(matrix[0].size(), mid);
            if(matrix[position.first][position.second] > target){
                end = mid - 1;
            }
            else if(matrix[position.first][position.second] < target){
                start = mid + 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
    pair<int, int> convert(int n, int a){
        pair<int, int> position;
        position.first = a / n;
        position.second = a % n;
        return position;
    }
};
