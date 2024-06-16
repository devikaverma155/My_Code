#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define vi vector<int>

int main() {
    fio
    int t;
    cin >> t;
    
        while (t--) {
        int n; cin >> n;
        vector<ll> v(n + 1, 0);
        for (int i = 1; i <= n; i++) cin >> v[i];
        unordered_map<ll, int> m;
        m[0.000]++;
        ll sum = 0;
        int c = 0;
        for (int i = 1; i <= n; i++) {
            sum += v[i];
            m[v[i]]++;
            if (m.find(sum / 2.0) != m.end()) c++;
        }
        cout << c << endl;
    }
    return 0;
}