#include<bits/stdc++.h>
using namespace std;
int n, idx, a[1000];
void Set_up(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void solve(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        idx = 0;
    }
    else{
        int right = n;
        while(a[right] < a[i]) --right;
        swap(a[right], a[i]);
        reverse(a + i + 1, a + n + 1);
    } 
}
int main(){
    cin >> n;
    Set_up();
    idx = 1;
    while(idx){
        for(int i = 1; i <= n; i++){
        cout << a[i];
        }
        cout << endl;
        solve();
    }
}