#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a;
bool visited[1001];
vector<int>parent;
int ok;
void bfs(int s, int p){
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.front();
        if(u == p){
            ok = 1;
            break;
        }
        for(int x : a[u]){
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
                parent[x] = u;
            }
        }
        q.pop();
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        int v, e, s, p; cin >> v >> e >> s >> p;
        a.assign(v+1,vector<int>());
        memset(visited, false, sizeof(visited));
        parent.assign(v+1, -1);
        ok = 0;
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
        }
        bfs(s, p);
        vector<int>mp;
        if(!ok) cout << -1;
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
        }
        cout << endl;
    }
}