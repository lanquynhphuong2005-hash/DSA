#include<bits/stdc++.h>
using namespace std;
vector<int>parent;
vector<vector<int>>a;
bool visited[1001];
int ok;
void bfs(int s, int p){
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.front();
        if(u == p){
            ok = 1;
        }
        for(int x : a[u]){
            if(!visited[x]){
                q.push(x);
                parent[x] = u;
                visited[x] = true;
            }
        }
        q.pop();
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int v, e, s, p;
        cin >> v >> e >> s >> p;
        a.assign(v+1,vector<int>());
        parent.assign(v+1,-1);
        memset(visited, false, sizeof(visited));
        ok = 0;
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        bfs(s, p);
        vector<int>mp;
        if(!ok) cout << -1 << endl;
        else{
            int i = p;
            mp.push_back(p);
            while(1){
                int x = parent[i];
                mp.push_back(x);
                if(x == s) break;
                i = parent[i];
            }
            reverse(mp.begin(),mp.end());
            for(int x : mp){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}