#include<bits/stdc++.h>
using namespace std;
long long a[31];
long long n, s;
int ans = INT_MAX;
void backtrack(long long x, int cnt, long long sum){
    if(sum == s){
        ans = min(ans,cnt);
        return;
    }
    for(int i = x; i < n; i++){
        if(sum + a[i] > s) continue;
        backtrack(i+1,cnt+1,sum+a[i]);
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        cin >> n >> s;
        memset(a,0,sizeof(a));
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n,greater<long long>());
        backtrack(0,0,0);
        if(ans == INT_MAX){
            cout << -1 << endl;
        }
        else cout << ans << endl;
    }
}