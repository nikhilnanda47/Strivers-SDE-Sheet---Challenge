class Solution {
    vector<int> CreateRow(int Row){
        long long ans =1;
        vector<int> ansRow;
        ansRow.push_back(1);

        for(int col=1;col<Row;col++){
            ans = ans * (Row-col);
            ans = ans / (col) ;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++){
            result.push_back(CreateRow(i));
        }
        return result;
    }
};
