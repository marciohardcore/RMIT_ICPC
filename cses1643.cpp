#include <bits/stdc++.h>
#include <limits.h>

using namespace std;
typedef long long ll;

int main(){
    ll n, x;
    vector <ll> a;

    cin>>n;
    for (int i = 0; i < n; ++i){
        cin>>x;
        a.push_back(x);
    }
    //ll max = -INFINITY;
    ll max = LLONG_MIN;
    ll s = 0;
    for (auto i = 0; i < n; ++i){
        if (s < 0){
            s = a[i];
        }
        else{
            s = s + a[i];
        }
        if (s > max){
            max = s;
        }
    }
    cout << max;
}