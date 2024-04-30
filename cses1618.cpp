#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n;
    cin >> n;
    if (n < 0){return -1;}
    ll count = 0;

    for (int i = 5; n / i >= 1; i*=5){
        count += n / i;
    }
    cout << count;
}

