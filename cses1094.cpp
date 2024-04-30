#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, a[200000], count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i){
        if (a[i] < a[i - 1]){
            count += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout<< count;
}  