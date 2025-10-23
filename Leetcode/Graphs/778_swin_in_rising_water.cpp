class Solution {
public:
    vector<vector<int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}};

    bool helper(int mid, vector<vector<int>> &grid) {
        int m = grid.size();
        int n = grid[0].size();

        if (grid[0][0] > mid) return false;

        vector<vector<bool>> vis(m, vector<bool>(n, false));
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0][0] = true;

        while (!q.empty()) {
            auto [x,y] = q.front();
            q.pop();
            #include <iostream>
            #include <vector>
            using namespace std;

            int main() {
                vector<vector<int>> grid = {
                    {0, 2},
                    {1, 3}
                };

                Solution sol;
                int result = sol.swimInWater(grid);
                cout << result << endl;
                return 0;
            }
            if (x == m-1 && y == n-1) return true;

            for (auto &d : dir) {
                int nx = x + d[0];
                int ny = y + d[1];
                if (nx >= 0 && nx < m && ny >= 0 && ny < n 
                    && !vis[nx][ny] && grid[nx][ny] <= mid) {
                    vis[nx][ny] = true;
                    q.push({nx,ny});
                }
            }
        }
        return false;
    }

    int swimInWater(vector<vector<int>>& grid) {
        int mini = INT_MAX, maxi = INT_MIN;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {  // fixed bug (i<n → j<n)
                mini = min(mini, grid[i][j]);
                maxi = max(maxi, grid[i][j]);
            }
        }

        while (mini < maxi) {
            int mid = (mini + maxi) / 2;
            if (helper(mid, grid)) 
                maxi = mid;
            else 
                mini = mid + 1;
        }

        return maxi;
    }
};
