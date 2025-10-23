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

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll low = 0;
        ll high = n - 1;
        bool found = false;
        if(v[0] > x){ cout<< 0 <<endl;continue;}
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            if (v[mid] <= x)
            {
                low = mid + 1;
            }
            else if (v[mid] > x)
            {
                high = mid - 1;
            }
        }
        if(!found)cout<< low<<endl;
    }

    return 0;
}