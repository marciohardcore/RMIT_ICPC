#include <bits/stdc++.h>
 
using namespace std;
 long long n,pos,a[200001];
 vector< long long> ans;
void input(){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();
    /*
    freopen("input.inp","r",stdin);
    freopen("input.out","w",stdout);
    */
    cin>>n;
    for (int i=0; i<n;++i){
        cin>>a[i];
    }
}
 
int main(){
    input();
    for (int i=0; i<n;++i){
        pos=upper_bound(ans.begin(), ans.end(), a[i])- ans.begin();
        if (pos==ans.size()){
            ans.push_back(a[i]);
        }
 
            else{ ans[pos]=a[i];}
 
 
    }
    cout<<ans.size();
}
