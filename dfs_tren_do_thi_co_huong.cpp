#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a;
bool visited[10001];
void dfs(int u){
    visited[u] = true;
    cout << u << " ";
    for(int x : a[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int v, e, u; cin >> v >> e >> u;
        a.assign(v+1,vector<int>());
        memset(visited, false, sizeof(visited));
        for(int i = 0; i < e; i++){
            int x,y; cin >> x >> y;
            a[x].push_back(y);
        }
        dfs(u);
    }
}