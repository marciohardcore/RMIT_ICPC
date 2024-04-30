#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



ll solve(vector<ll> &kill, ll i) {
    if (kill.size() == 0) {
        return 0;
    } else {
        i = (i+1) % kill.size();
        cout << kill[i] << " ";
        kill.erase(kill.begin() + i ); 
        return solve(kill, i); 
    }
}


int main(){
    ll n;
    cin >> n;
    vector <ll> kill;
    for (auto i = 1; i <= n; ++i){
        kill.push_back(i);
    }
    solve(kill, 0);
    return 0;
}