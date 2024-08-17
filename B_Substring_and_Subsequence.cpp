#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

void solve()
{
    string a,b;
    cin >> a >>b;
    int n = a.size(), m =b.size(), result = m;
    for (int i = 0; i < m; i++)
    {
        int curr = i, temp = i;
        for (int j = 0; j < n; j++)
        {
            if (a[j] ==b[temp])
            {
                temp++;
                if (temp == m)
                    break;
            }
        }
        result = min(result, curr + m - temp);
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