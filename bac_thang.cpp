#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main(){
    int test; cin >> test;
    while(test--){
        long long n, k; cin >> n >> k;
        int a[n+1];
        memset(a,0,sizeof(a));
        a[0] = 1;
        for(int i = 1; i <= n; i++){
            for(int j = i - k; j < i; j++){
                if(j >= 0){
                    a[i] = (a[i] + a[j]) % MOD;
                }
            }
        }
        cout << a[n] << endl;
    }
}