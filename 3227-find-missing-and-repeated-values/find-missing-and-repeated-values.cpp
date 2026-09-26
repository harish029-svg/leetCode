class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        map<int, int> container;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                container[grid[i][j]]++;
            }
        }
        int repeated = -1;
        int missing = -1;
        for(int j=1; j<=n*n; j++){
            if(container[j] == 2) {
                repeated = j;
            }
            else if(container[j] == 0) {
                missing = j;
            }

        }
        
        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;

    }
};