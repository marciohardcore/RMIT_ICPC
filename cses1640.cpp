#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n, x, a[200000];
    cin>>n>>x;
    ll i = 0;
    map <ll, ll> mp;
    //map <ll, ll> :: iterator it = mp.begin();

    while (i < n){
        cin >> a[i];
        if (mp.find(x - a[i]) != mp.end()){
            cout << mp[x - a[i]] + 1 << " "<<i + 1;
            return 0;
        }
        
        mp[a[i]] = i;
        ++i;
    }
    cout <<"IMPOSSIBLE";
}