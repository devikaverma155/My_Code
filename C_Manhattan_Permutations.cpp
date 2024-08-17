#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
typedef long long ll;

int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> p(n);
        iota(p.begin(), p.end(), 1); 
        
        int current_manhattan = 0;
        
        for (int i = n - 1; i >= 0 && current_manhattan < k; --i) {
            int max_contrib = (n - (i + 1));
            if (current_manhattan + max_contrib <= k) {
                swap(p[i], p[n - 1]);
                current_manhattan += max_contrib;
            } else {
                swap(p[i], p[i + (k - current_manhattan)]);
                current_manhattan = k;
            }
        }

        if (current_manhattan == k) {
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
