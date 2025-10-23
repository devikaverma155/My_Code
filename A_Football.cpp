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
 
        string s;
        cin >> s;
        bool yes = false;
        int cnt = 1;
        for (size_t i = 1; i < s.size(); ++i) {
            if (s[i] == s[i-1]) {
                ++cnt;
                if (cnt >= 7) { yes = true; break; }
            } else {
                cnt = 1;
            }
        }
        cout << (yes ? "YES" : "NO") << '\n';
    
    return 0;
}