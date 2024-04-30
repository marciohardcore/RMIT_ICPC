#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxn = 200000;


int main(){
    ll n,x,w, cnt = 0, init;
    cin>>n>>x;
    vector <ll> a;
    ll check[maxn] = {0};

    for (int i = 0; i < n ; ++i){
        cin>>init;
        a.push_back(init);
    }

    sort(a.begin(), a.end());
    ll i = 0;
    ll j = n - 1;
    while (i < j){
        if (a[i] + a[j] > x){
            --j;
        }
        else{
            ++cnt;
            check[i] = check[j] = true;
            --j;
            ++i;
        }
    }
    for (int i = 0; i < n; ++i){
        cnt += check[i] == false;
    }
    cout<<cnt;
}


// int main(){
//     ll n,x,w, cnt = 1;
//     cin>>n>>x;
//     ll s = 0;
//     ll cntt = 0;
//     for (int i = 0; i < n; ++i){
//         cin>>w;
//         if (s + w > x || cntt == 2){
//             ++cnt;
//             s = w;
//             cntt = 1;

//         }
//         else{
//             s += w;
//             ++cntt;
//         }
//         //}
//     }
//     cout<<cnt;
// }