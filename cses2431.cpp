#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power10(ll exp){
    ll n = 1;
    for (int i = 0; i < exp; ++i){
        n *= 10;
    }
    return n;
}
void solve(ll k){
    //find which group
    ll location = 0, sum = 0, group = 0;
    while (sum < k){
        
        location = sum + 1;
        sum +=9 * group * power10(group - 1);
        ++group;
    }
    --group;
    // 189 - (189 - 9) -> sum - (sum - 9 * (group - 1) * 10)
    //find the exact number
    //ll num = location + floor((k - location) / group);
    ll num = ((k - location) / group) + power10(group - 1);
    string ans = to_string(num);
    cout<< ans[(k - location) % group]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();
    ll q, k;
    cin >> q;
    for (int i = 0; i < q; ++i){
        cin >> k;
        solve(k);
    }
    return 0;
}