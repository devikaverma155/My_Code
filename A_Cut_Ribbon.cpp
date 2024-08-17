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
   int n , a , b ,c ;
   cin>>n>>a>>b>>c ;
   vector<int >dp(n+1 , INT_MIN);
    dp [0] =0 ;
    for( int  i =1  ;i <= n ;i++){
            if(i >=a && dp[i-a] != INT_MIN ){
                dp[i] = max(dp[i-a] + 1 , dp[i]) ;
            }
            if(i >= b && dp[i-b] != INT_MIN ){
                  dp[i] = max(dp[i-b] + 1 , dp[i]) ;
            }
             if(i >= c && dp[i-c] != INT_MIN ){
                  dp[i] = max(dp[i-c] + 1 , dp[i]) ;
            }
    }

    cout<< dp[n] << endl;
     return 0;
}