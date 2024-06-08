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
#define sort_all(v) sort(v.begin(), v.end())
#define PI 3.141592653589793238462
#define space cout << ' '
#define gcd(a, b) __gcd(a, b)

int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vi v(n), ans(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (v[f - 1] == v[i]) count++;
        }
        
        ans = v;
        sort(ans.begin(), ans.end(), greater<int>());
        
        int c1 = count;
        for (int i = 0; i < k; i++) {
            if (ans[i] == v[f - 1]) c1--;
        }
        
       
        
        if (c1 == 0) {
            cout << "YES" << endl;
        } else if (count > c1) {
            cout << "MAYBE" << endl;
        } else if (c1 == count) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
