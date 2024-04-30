#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n,x;
    cin>>n>>x;

    vector <ll> a;
    ll element;
    for (int i = 0; i < n; ++i){
        cin >> element;
        a.push_back(element);
    }

    ll l = 0, r = 0;
    ll s = 0, cnt = 0;
    while (r < n){
        s += a[r];
        while (s > x){
            s -= a[l];
            ++l;
        }
        if (s == x){
            ++cnt;
        }

        ++r;
    }
    cout << cnt;
}