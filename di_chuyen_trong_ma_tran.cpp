#include<bits/stdc++.h>
using namespace std;
int x[101][101];
int ans, m, n;
void backtrack(int i, int j){
    if(i == m-1 && j == n-1){
        ++ans;
        return;
    }
    if(j + 1 < n){
        backtrack(i,j+1);
    }
    if(i + 1 < m){
        backtrack(i+1,j);
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        cin >> m >> n;
        memset(x,0,sizeof(x));
        ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> x[i][j];
            }
        }
        backtrack(0,0);
        cout << ans << endl;
    }
}