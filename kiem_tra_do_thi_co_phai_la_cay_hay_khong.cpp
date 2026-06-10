#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a;
bool visited[1001];
int cnt;
void dfs(int u){
    visited[u] = true;
    for(int x : a[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        a.assign(1005,vector<int>());
        memset(visited, false, sizeof(visited));
        cnt = 0;
        for(int i = 0; i < n - 1; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                dfs(i);
                ++cnt;
            }
        }
        if(cnt > 1) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}