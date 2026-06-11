#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        int sum = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= 3; j++){
                if(i - j >= 0){
                    dp[i] += dp[i - j];
                }
            }
        }
        cout << dp[n] << endl;
    }
}