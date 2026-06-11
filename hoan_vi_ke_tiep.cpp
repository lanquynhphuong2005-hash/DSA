#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int i = n - 1;
        while(i >= 1 && a[i] > a[i+1]){
            --i;
        }
        if(i == 0){
            for(int u = 1; u <= n; u++){
                cout << u << " ";
            }
        }
        else{
            int right = n;
            while(a[right] < a[i]){
                --right;
            }
            swap(a[i], a[right]);
            reverse(a+i+1, a+n+1);
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}