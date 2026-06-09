#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int a = 0;
        int b = 0;
        for(int i = n/7; i >= 0; i--){
            if((n - 7*i) % 4 == 0){
                b = i;
                a = (n - 7*i)/4;
                break;
            }
        }
        if(a != 0 || b != 0){
            cout << string(a,'4') + string(b,'7') << endl;
        }
        else cout << -1 << endl;
    }
}