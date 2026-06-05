#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int k; string s;
        cin >> k >> s;
        map<char,int>cnt;
        for(char c : s){
            cnt[c]++;
        }
        priority_queue<int>q;
        for(auto x : cnt){
            q.push(x.second);
        }
        while(k > 0){
            int x = q.top();
            --x; --k;
            q.pop();
            q.push(x);
        }
        long long ans = 0;
        while(!q.empty()){
            long long x = q.top();
            ans += x*x;
            q.pop();
        }
        cout << ans << endl;
    }
}