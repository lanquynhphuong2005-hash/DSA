#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a;
int cnt;
bool visited[1001];
void dfs(int u){
    visited[u] = true;
    for(int x : a[u]){
        if(!visited[x]){
            visited[x] = true;
            dfs(x);
        }
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int v, e; cin >> v >> e;
        a.assign(v+1,vector<int>());
        memset(visited,false,sizeof(visited));
        cnt = 0;
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i = 1; i <= v; i++){
            if(!visited[i]){
                dfs(i);
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}