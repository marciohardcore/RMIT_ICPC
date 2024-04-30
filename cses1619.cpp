#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
int main(){
    ll n;
    cin>>n;

    vector<pair<ll,ll>> pr;
    ll u, v;
    for (int i = 0; i < n; ++i){
        cin>>u>>v;
        pr.push_back({u, 1});
        pr.push_back({v, -1});
    }

    sort(pr.begin(), pr.end());

    
}