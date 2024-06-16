#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
typedef long long ll;

int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        if( a>=b)cout<< a*n<<endl;
       
        else{ ll max_profit = n * a;

    
        ll k = min(n, b - a );
       
        ll modified_price_sum = k * (2 * b - k + 1) / 2;

      
        ll remaining_buns_sum = (n - k) * a;
        ll profit_with_k_buns = modified_price_sum + remaining_buns_sum;
        
     
        max_profit = max(max_profit, profit_with_k_buns);
        
        cout << max_profit << endl;}
    }
    return 0;
}
