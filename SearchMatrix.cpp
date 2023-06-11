class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        if(!matrix.size())  return false;
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = m*n - 1;
        
        while(low<=high){
            int middle  = low + (high-low)/2;

            if(matrix[middle/n][middle % n]==target){
                return true;
            }
            if(matrix[middle/n][middle % n]<target){
                low = middle+1;
            }
            if(matrix[middle/n][middle % n]>target){
                high = middle -1;
            }

        }
        return false;
    }
};
