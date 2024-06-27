#include <iostream>
#include <vector>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (auto &val : a) cin >> val;
        for (auto &val : b) cin >> val;

        int neutral = 0, positive = 0, negative = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                if (a[i] == -1) {
                    negative++;
                } else if (a[i] == 1) {
                    positive++;
                }
            }
        }

        int movieA = 0, movieB = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) continue;
            if (a[i] > b[i]) {
                movieA += a[i];
            } else {
                movieB += b[i];
            }
        }

        if (movieA > movieB) swap(movieA, movieB);

        neutral = positive;
        int diff = min(movieB - movieA, neutral);
        movieA += diff;
        neutral -= diff;
        diff = neutral / 2;
        neutral = neutral - diff;
        movieA += max(diff, neutral);
        movieB += min(diff, neutral);

        if (movieA > movieB) swap(movieA, movieB);

        neutral = -negative;
        diff = max(movieA - movieB, neutral);
        movieB += diff;
        neutral -= diff;
        diff = neutral / 2;
        neutral = neutral - diff;
        movieA += max(diff, neutral);
        movieB += min(diff, neutral);

        cout << min(movieA, movieB) << endl;
    }

    return 0;
}