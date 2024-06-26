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
#define int long long 
signed main() {
    fio
    int t;
    cin >> t;
    while (t--) {
int n;
cin>>n;
string s;
cin>>s;

if( n==2) 
{
    if ( s[0]-'0'== 0) cout<<s[1]<<endl;
    else cout<<s<<endl;
    continue;
}

bool zero= false;
 int ones=0;
 int sum=0  ;
for( int i=0;i<n;i++){
if(s[i]-'0'==0) {
    zero=true;
    break;
}
if( s[i]-'0'==1){
    ones++;
}
 if ( s[i]-'0' !=1)  sum+=s[i]-'0';


}
if( ones ==n) {
    cout<< 1<< endl;
    continue;
}
cout<< sum<<endl;

    }
    return 0;
}