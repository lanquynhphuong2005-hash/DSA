#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n, k; cin >> n >> k;
        int a[n+1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int left = 1, right = n;
        int ok = 1;
        while(left < right){
            int x = (right + left) / 2;
            if(a[x] == k){
                cout << x << endl;
                ok = 0;
                break;
            }
            if(k > a[x]){
                left = x + 1;
            }
            else{
                right = x - 1;
            }
        }
        if(ok) cout << "NO" << endl;
    }
}