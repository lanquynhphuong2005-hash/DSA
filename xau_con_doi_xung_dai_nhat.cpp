#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        int ans = 1;
        for(int i = 0; i < s.length(); i++){
            int l, r;
            l = i, r = i;
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                ans = max(ans, r - l + 1);
                --l; ++r;
            }
            l = i, r = i + 1;
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                ans = max(ans, r - l + 1);
                --l; ++r;
            }
        }
        cout << ans << endl;
    }
}