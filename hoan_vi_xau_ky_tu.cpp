#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        int n = s.length();
        int a[n];
        for(int i = 0; i < s.length(); i++){
            a[i] = i+1;
        }
        do{
            for(int i = 0; i < n; i++){
                cout << s[a[i]-1];
            }
            cout << " ";
        } while(next_permutation(a,a+n));
        cout << endl;
    }
}