#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows == 0)
            return ans;
        ans.push_back({1});
        if (numRows == 1)
            return ans;
        ans.push_back({1, 1});
        if (numRows == 2)
            return ans;
        for (int i = 2; i < numRows; i++) {
            vector<int> temp(i + 1, 1);
            for (int j = 1; j < ans[i - 1].size(); j++) {
                temp[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    Solution sol;
    vector<vector<int>> result = sol.generate(numRows);

    for (const auto& row : result) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}