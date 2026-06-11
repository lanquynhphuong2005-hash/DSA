#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        vector<int>pos;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '['){
                pos.push_back(i);
            }
        }
        int balance = 0;
        int p = 0;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '['){
                ++p;
                ++balance;
            }
            else{
                --balance;
            }
            if(balance < 0){
                swap(s[i], s[pos[p]]);
                balance = 1;
                ans += pos[p] - i;
                ++p;
            }
        }
        cout << ans << endl;
    }
}