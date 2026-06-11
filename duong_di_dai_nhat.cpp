#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>>a;
bool visited[25];
int ans;
void dfs(int s, int len){
    ans = max(ans, len);
    for(auto it : a[s]){
        if(!visited[it.second]){
            visited[it.second] = true;
            dfs(it.first, len+1);
            visited[it.second] = false;
        }
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int n, m; cin >> n >> m;
        ans = 0;
        a.assign(25, vector<pair<int,int>>());
        memset(visited, false, sizeof(visited));
        for(int i = 0; i < m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back({v, i});
            a[v].push_back({u, i});
        }
        for(int i = 0; i < n; i++){
            dfs(i, 0);
        }
        cout << ans << endl;
    }
}