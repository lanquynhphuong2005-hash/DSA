#include<bits/stdc++.h>
using namespace std;
int n, a[100], cnt, ok;
void set_up(){
    cnt = 1;
    a[1] = n;
}
void solve(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        --i;
    }
    if(i == 0) ok = 0;
    else{
        a[i]--;
        int d = cnt - i + 1; 
        int p = d / a[i];
        int q = d % a[i];
        cnt = i;
        if(p != 0){
            for(int j = 1; j <= p; j++){
                a[++cnt] = a[i];
            }
        }
        if(q != 0) a[++cnt] = q;
    }
}
int main(){
    cin >> n;
    set_up();
    ok = 1;
    while(ok){
        for(int i = 1; i <= cnt; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        solve();
    }
}