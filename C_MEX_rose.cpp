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
    int t;
    cin >> t;
    while (t--) {
int n , k;
cin>>n >>k;
vi v(n);
int k_present =0  ;
vector<int> present(k+1 ,0) ;
for( int i=0;i<n;i++){
cin>>v[i];
if(v[i]==k) k_present++;
if(v[i] < k) present[v[i]]++ ;
}
 int ans = 0 ;
for(int i = 0 ; i<k ;i++){
if(present[i] <1)
    ans++;
  
}
cout<< max(ans , k_present)<<endl;


    }
    return 0;
}