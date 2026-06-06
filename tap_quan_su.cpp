#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int n, int k){
    map<int,int>mp;
    for(int i = 1; i <= k; i++){
        mp[a[i]]++;
    }
    int i = k;
    while(i >= 1 && a[i] == n-k+i){
        --i;
    }
    if(i == 0) return k;
    else{
        a[i]++;
        for(int j = i+1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
    }
    int cnt = 0;
    for(int i = 1; i <= k; i++){
        if(mp[a[i]]!=0){
            ++cnt;
        }
    }
    return k - cnt;
}
int main(){
    int test; cin >> test; 
    while(test--){
        int n,k; cin >> n >> k;
        int a[k+1];
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        cout << solve(a,n,k) << endl;
    }
}