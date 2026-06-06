#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int b[n+2];
    int ok = 1;
    vector<vector<int>>index;
    for(int i = 1; i <= n; i++){
        b[i] = i;
    }
    while(ok){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += a[i][b[i]];
        }
        vector<int>idx;
        if(sum == k){
            for(int i = 1; i <= n; i++){
                idx.push_back(b[i]);
            }
            index.push_back(idx);
        }
        int u = n-1;
        while(u >= 1 && b[u] > b[u+1]){
            --u;
        }
        if(u == 0) ok = 0;
        else{
            int v = n;
            while(b[u] > b[v]) --v;
            swap(b[u],b[v]);
            reverse(b+u+1,b+n+1);
        }
    }
    cout << index.size() << endl;
    for(int i = 0; i < index.size(); i++){
        for(int j = 0; j < n; j++){
            cout << index[i][j] << " ";
        }
        cout << endl;
    }
}