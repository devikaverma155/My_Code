#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
typedef long long ll;
#define vi vector<int>

int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int good_prefix_count = 0;

        for (int k = 1; k <= n; k++) {
            ll prefix_sum = 0;
            for (int i = 0; i < k; i++) {
                prefix_sum += v[i];
            }

            bool is_good = false;
            for (int i = 0; i < k; i++) {
                if (v[i] == prefix_sum - v[i]) {
                    is_good = true;
                    break;
                }
            }

            if (is_good) {
                good_prefix_count++;
            }
        }

        cout << good_prefix_count << endl;
    }
    return 0;
}