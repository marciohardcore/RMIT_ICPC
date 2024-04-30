




#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    ll x,n;
    cin>>x>>n;

    ll num, dis;
    set <ll> st{0, x};
    multiset <ll> dist{x};

    for (int i = 0; i < n; ++i){
        cin>>num;
        //st.insert(num);

        auto it = st.upper_bound(num);
        auto it2 = it;
        --it2;

        dist.erase(dist.find(*it - *it2));
        dist.insert(num - *it2);
        dist.insert(*it - num);
        st.insert(num);

        auto ans = dist.end();
        --ans;
        cout<< *ans <<" ";
    }
    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;
// int main(){
//     ll x,n;
//     cin>>x>>n;

//     ll num, dis;
//     set <ll> st;
//     pair <ll,ll> pr;
//     ll max_val = 0;

//     st.insert(0);
//     st.insert(x);

//     for (int i = 0; i < n; ++i){
//         cin>>num;
//         st.insert(num);

//         auto it = st.upper_bound(num);
//         ll right = *it;
//         auto it2 = st.find(num);
//         --it2;
//         //--it2;
//         ll left = *it2;


//         dis = max(right - num, num - left);
        
//         // if (num <= pr.second && num >= pr.first){
//         //     max_val = dis;
//         //     pr = make_pair(left, right);

//         // }

//         if (dis > max_val || num <= pr.second && num >= pr.first){
//             max_val = dis;
//             if (dis == right - num){
//                 pr = make_pair(num, right);
//             }
//             else{
//                 pr = make_pair(left, num);
//             }
//             //pr = make_pair(max(left,num),max(num, right));
//         }
//         cout<<max_val<<" ";
//     }
//     return 0;
// }