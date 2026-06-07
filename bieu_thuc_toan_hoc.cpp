#include<bits/stdc++.h>
using namespace std;
int a[6]; bool check;
void backtrack(int pos, int result){
    if(pos == 5){
        if(result == 23){
            check = true;
        }
        return;
    }
    backtrack(pos+1,result+a[pos]);
    backtrack(pos+1,result-a[pos]);
    backtrack(pos+1,result*a[pos]);
}
int main(){
    int test; cin >> test;
    while(test--){
        for(int i = 0; i < 5; i++){
            cin >> a[i];
        }
        check = false;
        sort(a,a+5);
        do{
            backtrack(1,a[0]);
            if(check) break;
        }while(next_permutation(a,a+5));
        if(check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}