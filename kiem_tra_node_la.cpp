#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left, *right;
    Node(int x){
        val = x;
        left = right = NULL;
    }
};
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        map<int, Node*>mp;
        set<int>child;
        for(int i = 0; i < n; i++){
            int u, v; char x;
            cin >> u >> v >> x;
            if(!mp[u]) mp[u] = new Node(u);
            if(!mp[v]) mp[v] = new Node(v);
            if(x == 'L'){
                mp[u]->left = mp[v];
            }
            else{
                mp[u]->right = mp[v];
            }
            child.insert(v);
        }
        Node* root = NULL;
        for(auto &it : mp){
            if(child.find(it.first) == child.end()){
                root = it.second;
            }
        }
        queue<pair<Node*,int>>q;
        q.push({root, 0});
        int level = -1;
        int ok = 0;
        while(!q.empty()){
            Node* cur = q.front().first;
            int l = q.front().second;
            q.pop();
            if(!cur->left && !cur->right){
                if(level == -1){
                    level = l;
                }
                else{
                    if(l != level){
                        cout << 0 << endl;
                        ok = 1;
                        break;
                    }
                }
            }
            if(cur->left){
                q.push({cur->left, l+1});
            }
            if(cur->right){
                q.push({cur->right, l+1});
            }
        }
        if(!ok) cout << 1 << endl;
    }
}