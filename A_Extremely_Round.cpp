#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int digits = log10(n) + 1;
        int count = 9 * (digits - 1);
        count += n / pow(10, digits - 1);
        
        cout << count << endl;
    }
    return 0;
}