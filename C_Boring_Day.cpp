#include <iostream>
#include <vector>
#include <algorithm>
#define int long long 
using namespace std;

int rounds(vector<int>& v, int l, int r) {
    int n = v.size();
   int s=0,e=0;
   int sum =0;
   int ans=0;
   while ( s<=e and e<n){
sum += v[e];
if( sum>=l and sum <=r){
    ans++;
    s=e+1;
sum =0;
}
else if(sum >l and s<=e) {
     while ( sum >l ){
sum -= v[s];
if( sum>=l and sum <=r){
    ans++;
    s=e+1;
sum =0;
break;
}
s++;
     }
 
}
e++;
   }
   return ans;
}

signed main() {
    int t;
     cin>> t;
     while ( t--){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    cout <<rounds(cards, l, r) << endl;
}
    return 0;
}