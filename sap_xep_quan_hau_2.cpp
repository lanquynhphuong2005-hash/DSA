#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int a[9][9];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> a[i][j];
            }
        }
        int x[4] = {0,2,4,6};
        int y[4] = {1,3,5,7};
        int sum1 = 0;
        int sum2 = 0;
        int sum3 = 0;
        int sum4 = 0;
        for(int i = 0; i < 4; i++){
            sum1 += a[0][x[i]] + a[7][y[i]];
            sum2 += a[0][y[i]] + a[7][x[i]];
            sum3 += a[x[i]][0] + a[y[i]][7];
            sum4 += a[y[i]][0] + a[x[i]][7];
        }
        cout << max(max(sum1,sum2),max(sum3,sum4)) << endl;
    }
}