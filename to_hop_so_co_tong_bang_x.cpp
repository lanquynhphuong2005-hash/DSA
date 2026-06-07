#include<bits/stdc++.h>
using namespace std;
int n, x;
vector<vector<int>>mp;
vector<int>idx;
int a[21];
bool found;
void backtrack(int pos, int sum){
    if(sum == x){
        mp.push_back(idx);
        found = true;
        return;
    }
    if(sum > x) return;
    for(int i = pos; i < n; i++){
        idx.push_back(a[i]);
        backtrack(i,sum+a[i]);
        idx.pop_back();
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        cin >> n >> x;
        memset(a,0,sizeof(a));
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        mp.clear();
        idx.clear();
        found = false;
        backtrack(0,0);
        if(!found) cout << -1 << endl;
        else{
            for(int i = 0; i < mp.size(); i++){
                cout << "[";
                for(int j = 0; j < mp[i].size(); j++){
                    cout << mp[i][j];
                    if(j != mp[i].size()-1){
                        cout << " ";
                    }
                }
                cout << "]";
                if(i != mp.size()-1) cout << " ";
            }
            cout << endl;
        }
    }
}