#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
#define int long long 

signed main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        int m; 
        cin >> m;
        vector<int> d(m);
        for (int i = 0; i < m; ++i) cin >> d[i];

        map<int, int> freq;
        for (const auto &x : d) freq[x]++;

        bool found_last_element = false;
        bool valid = true;

        for (int i = 0; i < n; ++i) {
            if (b[i] == d[m - 1]) found_last_element = true;
            if (a[i] != b[i]) {
                if (freq[b[i]] > 0) {
                    freq[b[i]]--;
                    if (freq[b[i]] == 0) freq.erase(b[i]);
                } else {
                    valid = false;
                    break;
                }
            }
        }

        if (valid && (found_last_element || freq.empty())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
