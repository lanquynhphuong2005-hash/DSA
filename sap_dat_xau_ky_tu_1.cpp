#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        map<char,int>mp;
        int m = 0;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
            m = max(m,mp[s[i]]);
        }
        if(m <= s.length()/2) cout << 1 << endl;
        else cout << -1 << endl;
    }
}