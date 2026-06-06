#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int stt; cin >> stt;
        string s; cin >> s;
        int n = s.length();
        int i = n-2;
        while(i >= 0 && s[i]-'0' >= s[i+1]-'0'){
            --i;
        }
        if(i < 0){
            cout << stt << " BIGGEST" << endl;
            continue;
        }
        else{
            int j = i;
            while(j < n && s[i]-'0' < s[j+1]-'0'){
                ++j;
            }
            swap(s[i],s[j]);
            reverse(s.begin()+i+1,s.end());
            cout << stt << " " << s << endl;
        }
    }
}