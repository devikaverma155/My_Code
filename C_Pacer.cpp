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
 int prev_time  = 0 ;
 int prev_side = 0;
 int  point = 0 ;

 while(n--){
    int time , side ;
    cin>> time >> side;
    int gap = time - prev_time ;
    point += gap ;
    if((gap+2 ) %2 != ( side - prev_side +2) %2) {
        point--;
    }
    prev_time = time ;
prev_side = side ;
 }
if(prev_time<m) point += (m - prev_time) ;

cout<<point<<endl;
}
    return 0;
}