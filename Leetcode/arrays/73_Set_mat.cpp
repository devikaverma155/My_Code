class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        bool isColZero = false;

        // Step 1: mark rows and cols
        for (int i = 0; i < m; i++) {
            if (mat[i][0] == 0) isColZero = true;
            for (int j = 1; j < n; j++) {
                if (mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }

        // Step 2: set zeroes except first row and col
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }

        // Step 3: handle first row
        if (mat[0][0] == 0) {
            for (int j = 0; j < n; j++) mat[0][j] = 0;
        }

        // Step 4: handle first column
        if (isColZero) {
            for (int i = 0; i < m; i++) mat[i][0] = 0;
        }
    }
};
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    Solution sol;
    sol.setZeroes(mat);

    for (const auto& row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}