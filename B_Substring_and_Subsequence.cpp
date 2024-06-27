#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

void solve()
{
    string a,b;
    cin >> a >>b;
    int n = a.size(), m =b.size(), result = m;
    for (int start = 0; start < m; start++)
    {
        int curr = start, i2 = start;
        for (int i1 = 0; i1 < n; i1++)
        {
            if (a[i1] ==b[i2])
            {
                i2++;
                if (i2 == m)
                    break;
            }
        }
        result = min(result, curr + m - i2);
    }
    cout << result + n << '\n';
}
int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}