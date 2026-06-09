#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a;
bool visited[1001];
int ok;
void dfs(int s, int p){
    visited[s] = true;
    if(s == p){
        ok = 1;
        return;
    }
    for(int x : a[s]){
        if(!visited[x]){
            visited[x] = true;
            dfs(x,p);
        }
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int n, m; cin >> n >> m;
        a.assign(n+2,vector<int>());
        ok = 0;
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int q; cin >> q;
        while(q--){
            memset(visited,false,sizeof(visited));
            int s, p; cin >> s >> p;
            dfs(s,p);
            if(ok) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
    }
}