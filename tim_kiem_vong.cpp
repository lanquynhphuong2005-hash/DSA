#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n, x; cin >> n >> x;
        int a[n+1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int l = 1, r = n, mid;
        while(l <= r){
            mid = (l + r)/2;
            if(a[mid] == x){
                cout << mid << endl;
                break;
            }
            else{
                if(a[mid] < a[r]){
                    if(a[mid] < x && x < a[r]){
                        l = mid;
                    }
                    else{
                        r = mid;
                    }
                }
                else{
                    if(x > a[l] && x < a[mid]){
                        r = mid;
                    }
                    else{
                        l = mid;
                    }
                }
            }
        }
    }
}