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
            if(!mp[u]){
                mp[u] = new Node(u);
            }
            if(!mp[v]){
                mp[v] = new Node(v);
            }
            if(x == 'L'){
                mp[u]->left = mp[v];
            }
            else{
                mp[u]->right = mp[v];
            }
            child.insert(v);
        }
        Node* root = NULL;
        for(auto &x : mp){
            if(child.find(x.first) == child.end()){
                root = x.second;
            }
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* cur = q.front(); 
            q.pop();
            cout << cur->val << " ";
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
        cout << endl;
    }
}