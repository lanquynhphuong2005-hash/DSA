#include<bits/stdc++.h>
using namespace std;
vector<long long>mp;
void solve(){
    mp.push_back(1);
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    for(int i = 1; i < 10001; i++){
        long long x = min({mp[i1]*2,mp[i2]*3,mp[i3]*5});
        mp.push_back(x);
        if(x == mp[i1]*2) ++i1;
        if(x == mp[i2]*3) ++i2;
        if(x == mp[i3]*5) ++i3;
    }
}
int main(){
    int test; cin >> test;
    solve();
    while(test--){
        int n; cin >> n;
        cout << mp[n-1] << endl;
    }
}