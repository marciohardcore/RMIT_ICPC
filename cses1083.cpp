#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, num;
ll bin(vector <ll> &a, ll l, ll r){
    if (l > r) return l;

    ll mid = l + (r - l) / 2;

    if (mid + 1 == a[mid]){
        return bin(a, mid + 1 , r);
    }
    else{
        return bin(a, l, mid - 1);
    }
}
int main(){
    vector <ll> a;
    cin>> n;
    for (int i = 1; i <= n - 1; ++i){
        cin>> num;
        a.push_back(num);
    }


    sort(a.begin(), a.end());

    ll ans = bin(a, 0, n - 2) + 1;
    cout << ans;
}