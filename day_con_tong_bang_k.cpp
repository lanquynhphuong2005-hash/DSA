#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mp;
vector<int>idx;
int n, s; int a[11];
void backtrack(int pos, int sum){
    if(sum == s){
        mp.push_back(idx);
        return;
    }
    for(int i = pos; i < n; i++){
        if(sum+a[i] > s) continue;
        idx.push_back(a[i]);
        backtrack(i+1,sum+a[i]);
        idx.pop_back();
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        cin >> n >> s;
        idx.clear();
        mp.clear();
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        backtrack(0,0);
        if(!mp.size()){
            cout << -1 << endl;
            continue;
        }
        for(int i = 0; i < mp.size(); i++){
            cout << "[";
            for(int j = 0; j < mp[i].size(); j++){
                cout << mp[i][j];
                if(j != mp[i].size()-1){
                    cout << " ";
                }
            }
            cout << "]";
        }
        cout << endl;
    }
}