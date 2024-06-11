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
int mod=10^9+7;
int sum(int x){
int ans=0;
for( int i=0;i<=x;i++)ans+=i;
return ans;
}
int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
int l=0,k=0,r=0;
cin>>l>>r>>k;
l= 10^l;
r=10^r;
int ans=0;
for( int i=l;i<=r;i++){
    if( sum( k* i)== k*sum(i)){
        ans+=(ans+1)%mod;
    }
}
cout<<ans<<endl;

}
    
    return 0;
}