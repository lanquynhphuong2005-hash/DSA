#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int a, b; cin >> a >> b;
        int ground[501][501];
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cin >> ground[i][j];
            }
        }
        queue<pair<int,int>>q;
        int small_seeds = 0;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(ground[i][j] == 2){
                    q.push({i,j});
                }
                else if(ground[i][j] == 1){
                    ++small_seeds;
                }
            }
        }
        int h[4] = {-1,+1,0,0};
        int c[4] = {0,0,-1,+1};
        int days = 0;
        if(small_seeds == 0){
            cout << days << endl;
            break;
        }
        while(!q.empty()){
            bool grown_up = false;
            int k = q.size();;
            while(k--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for(int e = 0; e < 4; e++){
                    int x = i + h[e];
                    int y = j + c[e]; 
                    if(x >= 0 && x < a && y >= 0 && y < b && ground[x][y] == 1){
                        ground[x][y] = 2;
                        --small_seeds;
                        q.push({x,y});
                        grown_up = true;
                    }
                }
            }
            if(grown_up == true) ++days;
        }
        if(small_seeds) cout << -1 << endl;
        else{
            cout << days << endl;
        }
    }
}