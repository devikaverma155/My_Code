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
int n , m;
cin>>n >>m;
vector<int> u(m , -1);
u[0] = 0 ;
while(n--){
    int a , b;
    cin>>a >>b;
    u[a] = b;
    }
    int ans = 0 ;
for( int i=1;i<=m;i++){
   if(u[i-1] == 0 && u[i] == -1){
       u[i] = 1 ;
   }
   else if( u[i-1] == 1 && u[i] == -1){
u[i] = 0;
}
}

for(int i = 0  ; i<=m ;i++){
    cout<<u[i]<<" ";
    //if(u[i] == u[i+1]) ans++;
}

cout<<ans<<endl;

}
    return 0;
}