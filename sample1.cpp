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

int  value ( int a , int b){
    if( a == b) return 0 ;
    else if(a > b) return 1;
    else return -1 ;

    
}

int main() {
    fio
    int t;
    cin >> t;
    while (t--) {

int a1 , a2 , b1 , b2;
int ans =0;
cin>>a1>>a2>>b1>>b2;

if( value(a1,b1) + value(a2,b2) > 0 ) ans++;
if(   value(a2,b2)+ value(a1,b1) > 0 ) ans++;
 if( value(a2, b1) + value(a1,b2) >0) ans++;

 if( value(a2, b1) + value(a1,b2) >0) ans++;




cout<< ans << endl;
    }
    return 0;
}