#include<bits/stdc++.h>
using namespace std;
const int MAX = 100001;
int total[MAX];
bool check(int i){
    map<int,int>m;
    while(i){
        int x = i % 10;
        if(x > 5) return false;
        m[x]++;
        if(m[x] > 1) return false;
        i /= 10;
    }
    return true;
}
void solve(){
    total[0] = 1;
    for(int i = 1; i < MAX; i++){
        if(check(i)){
            total[i] = total[i-1] + 1;
        }
        else{
            total[i] = total[i-1];
        }
    }
}
int main(){
    int test; cin >> test;
    solve();
    while(test--){
        int l,r; cin >> l >> r;
        if(l == 0) cout << total[r] << endl;
        else cout << total[r] - total[l-1] << endl;
    }
}