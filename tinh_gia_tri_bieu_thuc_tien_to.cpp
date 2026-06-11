#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        stack<long long>st;
        for(int i = s.length()-1; i >= 0; i--){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }
            else{
                long long a = st.top(); st.pop();
                long long b = st.top(); st.pop();
                if(s[i] == '*') st.push(a*b);
                if(s[i] == '/'){
                    if(b == 0) st.push(0);
                    else st.push(a/b);
                }
                if(s[i] == '+') st.push(a+b);
                if(s[i] == '-') st.push(a-b);
            }
        }
        cout << st.top() << endl;
    }
}