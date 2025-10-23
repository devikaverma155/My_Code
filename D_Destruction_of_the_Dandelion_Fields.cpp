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

int main()
{
    fio int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> odd ;
        ll even = 0;

        for(ll i =0 ; i<n ; i++){
            if(v[i] %2 ==0){
                even += v[i];
            }
            else{
               odd.push_back(v[i]);
            }
        }
        sort(odd.begin() , odd.end() , greater<ll>());
       ll odd_size = odd.size();
       
       if(odd_size == 0 ) {
        cout<<0<<endl;
        continue;
       }
       else if (odd_size ==1 ){
        cout<< odd[0] + even <<endl;
        continue;
       }
       else {
        ll ans = 0 ;
        ll odd_take  = ceil((double)odd_size /2) ;
        // cout<<"odd_take "<< odd_take <<endl;
        for(ll i =0 ; i< odd_take ; i++){
            ans += odd[i];
        }
        // cout<<"ans "<< ans <<endl;
        cout<< ans + even <<endl;
       }
    }
    return 0;
}