#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        stack<char>st;
        int ok = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ')'){
                st.push(s[i]);
            }
            else{
                int cnt = 0;
                while(!st.empty() && st.top() != '('){
                    ++cnt;
                    st.pop();
                }
                st.pop();
                if(cnt <= 1){
                    ok = 1;
                }
            }
        }
        if(ok) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}