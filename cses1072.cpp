#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, token = 0, prev = 0;
    cin>>n;
    ll ans[10001] = {0};
    ans[1] = 0;
    ans[2] = 6;
    for (ll i = 3; i <= 10000; ++i){
        token = 4 * (i - 2) * (i - 1);
        ans[i] = ((i * i) * (i * i - 1)) / 2 - 4 * (i - 2) * (i - 1);

        // token = token + (i - 2);
        // ans[i] = ((i * i) * (i * i - 1)) / 2 - 8 * token;
        // //prev = token + 1;
    }
    for (ll i = 1; i <= n; ++i){
        cout<<ans[i]<<endl;
    }
}