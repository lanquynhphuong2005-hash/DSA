#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a;
bool visited[1001];
vector<int>mp;
int ok;
void dfs(int s, int p){
    visited[s] = true;
    mp.push_back(s);
    if(s == p){
        ok = 1;
        for(int i = 0; i < mp.size(); i++){
            cout << mp[i] << " ";
        }
        cout << endl;
    }
    for(int x : a[s]){
        if(!visited[x]){
            visited[x] = true;
            dfs(x,p);
            mp.pop_back();
        }
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int v, e, s, p; 
        cin >> v >> e >> s >> p;
        a.assign(v+1,vector<int>());
        memset(visited,false,sizeof(visited));
        ok = 0;
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
        }
        dfs(s, p);
        if(!ok) cout << -1 << endl;
    }
}