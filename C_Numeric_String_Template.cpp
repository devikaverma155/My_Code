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
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int test;
        cin >> test;

        while (test--) {
            map<char, int> mp;
            map<int, char> mp2;
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO" << endl;
                continue;
            }

            bool valid = true;
            for (int i = 0; i < n; i++) {
                char c = s[i];
                int num = v[i];

                if (mp.find(c) != mp.end()) {
                    if (mp[c] != num || mp2[num] != c) {
                        valid = false;
                        break;
                    }
                } else {
                    if (mp2.find(num) != mp2.end() && mp2[num] != c) {
                        valid = false;
                        break;
                    }
                    mp[c] = num;
                    mp2[num] = c;
                }
            }
            
            if (valid) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
