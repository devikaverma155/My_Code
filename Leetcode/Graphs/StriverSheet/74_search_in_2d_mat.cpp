#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = n*m - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int mid_value = mat[mid/m][mid%m];
            if(mid_value == target) return true;
            else if(mid_value < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};

int main() {
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    Solution sol;
    if(sol.searchMatrix(mat, target)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}