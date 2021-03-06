class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> &o) {
        int m = o.size(),n = o[0].size();
        vector<vector<int>> ans(m+1,vector<int> (n+1,0));
        ans[0][1] = 1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(o[i-1][j-1]!=1){
                    ans[i][j] = ans[i-1][j] + ans[i][j-1];
                }
            }
        }
        return ans[m][n];
    }
};