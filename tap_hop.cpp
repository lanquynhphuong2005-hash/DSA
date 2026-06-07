#include <bits/stdc++.h>
using namespace std;
int n,k,s;
int ans;
void backtrack(int x, int y, int sum){
    if(y == k){
        if(sum == s){
            ++ans;
        }
    }
    else{
        for(int i = x; i <= n; i++){
            if(sum + i > s){
                continue;
            }
            backtrack(i+1,y+1,sum+i);       
        }
    }
}
int main(){
    while(1){
        ans = 0;
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0){
            break;
        }
        else{
            backtrack(1,0,0);
        }
        cout << ans << endl;
    }
}