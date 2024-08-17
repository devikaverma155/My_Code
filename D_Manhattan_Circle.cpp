#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
          int srow = n, scol = m, erow = -1, ecol = -1;
        vector<vector<char>> hashes(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> hashes[i][j];
            }
        }

      

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (hashes[i][j] == '#') {
                    srow = min(srow, i);
                    erow = max(erow, i);
                    scol = min(scol, j);
                    ecol = max(ecol, j);
                }
            }
        }

        int x = (srow + erow) / 2 + 1; 
        int y = (scol + ecol) / 2 + 1;

        cout << x << " " << y<< endl;
    }
    return 0;
}