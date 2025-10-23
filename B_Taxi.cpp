#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    int one = 0, two = 0, three = 0, four = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) one++;
        else if (v[i] == 2) two++;
        else if (v[i] == 3) three++;
        else if (v[i] == 4) four++;
    }

    int ans = four;

    // Pair 3s with 1s
    int mn = min(three, one);
    ans += mn;
    three -= mn;
    one -= mn;

    // Remaining 3s need one taxi each
    ans += three;

    // Pair 2s
    ans += (two / 2);
    two = two % 2;

    // If one 2 is left
    if (two == 1) {
        if (one >= 2) {
            ans += 1;
            one -= 2;
        } else if (one == 1) {
            ans += 1;
            one -= 1;
        } else {
            ans += 1; // Just the 2 alone
        }
    }

    // Remaining 1s
    if (one > 0) {
        ans += (one + 3) / 4; // ceil(one / 4)
    }

    cout << ans << endl;
    return 0;
}
