#include<bits/stdc++.h>
using namespace std;
int n, k, a[17], cnt, idx;
void set_up(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void xau_nhi_phan(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;--cnt;
    }
    if(i == 0) idx = 0;
    else{
        a[i] = 1;
        ++cnt;
    }
    if(cnt == k){
        for(int u = 1; u <= n; u++){
            cout << a[u];
        }
        cout << endl;
    }
}
int main(){
    int test; cin >> test;
    while(test--){
        cin >> n >> k;
        cnt = 0; idx = 1;
        set_up();
        while(idx){
            xau_nhi_phan();
        }
    }
}