#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m, k, id, counter = 0;
    vector <ll> a, b;
    
    cin>>n>>m>>k;
    for (int i = 0; i < n; ++i){
        cin>> id;
        a.push_back(id);
    }
    for (int i = 0; i < m; ++i){
        cin>> id;
        b.push_back(id);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    //ll *p1 = &a, *p2 = &b;
    auto p1 = a.begin(), p2 = b.begin();

    //while (*p1 != &a.end() && *p2 != &b.end()){
    while (p1 != a.end() && p2 != b.end()){
        //if (*p1 == *p2 || *p1 - k == *p2 || *p1 + k == *p2) {
        if (abs(*p1 - *p2) <= k){
           // *p1 == *p2 || *p1 - k == *p2 || *p1 + k == *p2) {
            ++counter;
            ++p1;
            ++p2;
        }
        else{
            if (*p1 - k > *p2) {
                ++p2;
            }
            if (*p1 + k < *p2){
                ++p1;
            }
        }
    }
    std::cout<<counter;
}