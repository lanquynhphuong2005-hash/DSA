#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int a[n+1], b[n+1];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        long long result = 0;
        for(int i = 0; i < n; i++){
            result += a[i]*b[i];
        }
        cout << result << endl;
    }
}