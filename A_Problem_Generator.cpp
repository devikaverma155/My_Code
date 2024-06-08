#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
#define incr_loop(a, n) for (int i = a; i < n; i++)
#define decr_loop(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long ll;
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define vi vector<int>
#define sort_all(v) sort(all(v));
#define PI 3.141592653589793238462
#define space cout << ' ';
#define gcd(a, b) __gcd(a, b)

int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int ans = 0;
        char arr[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
        unordered_map<char, int> mp;
        
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        for (auto x : arr) {
            if (mp[x] < m) ans += (m - mp[x]);
        }
        cout << ans << endl;
    }
    return 0;
}
