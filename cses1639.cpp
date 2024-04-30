#include <bits/stdc++.h>
#include <string.h>


using namespace std;
 
typedef long long ll;
const ll maxn = 5001;
int main(){
    string x, y;
    cin >> x >> y;
 
    ll ans;
    ll a[x.length() + 1][y.length() + 1] = {0};
 
    for (int i = 0; i <= x.length(); ++i){ a[i][0] = i;}
    for (int i = 0; i <= y.length(); ++i){ a[0][i] = i;}
    a[0][0] = 0;
    for (int i = 1; i <= x.length(); ++i){
        for (int j = 1; j <= y.length(); ++j){
            if (x[i-1] == y[j-1]){
                    a[i][j] = a[i-1][j-1];
            }
            else{
                a[i][j] = min(a[i-1][j], a[i][j-1]) + 1;
                
                //a[i][j] = min(a[i][j],a[i-1][j-1] + 1);
            }
        }
    }
    cout <<a[x.length()][y.length()];
    return 0;
}
 
