#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, i = 0,x;
    cin>>n;
    set <int> mp;
    while (i < n){
        cin>>x;
        mp.insert(x);
        ++i;
    }
    cout<<mp.size();
}