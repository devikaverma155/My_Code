#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first = m-1 ;
        int second = n-1 ;
        int zero = m+n-1;
        while(second>=0){
            if( first>=0 && (nums1[first] > nums2[second])){
                nums1[zero--] = nums1[first--];
            }
            else{
                nums1[zero--] = nums2[second--];
            }
        }
    }
};

int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3, n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}