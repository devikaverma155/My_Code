#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    long long maxi = INT_MIN;
    long long sum = 0;
    long long n = nums.size();
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum > maxi) maxi = sum;
        if (sum < 0) sum = 0;
    }
    return maxi;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubArray(nums) << endl;
    return 0;
}