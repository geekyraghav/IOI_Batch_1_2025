class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i >= 1 && j >= 1 && arr[i][j] == 1){
                    arr[i][j] += min(arr[i-1][j-1],min(arr[i-1][j],arr[i][j-1]));
                }
                count += arr[i][j];
            }
        }
        // reset the array (interview purpose)
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] != 0) arr[i][j] = 1;
            }
        }
        return count;
    }
};
