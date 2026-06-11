#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        queue<string>q;
        q.push("A");
        q.push("B");
        while(1){
            if(q.front().length() == n){
                cout << q.front() << " ";
            }
            else if(q.front().length() > n){
                break;
            }
            q.push(q.front() + "A");
            q.push(q.front() + "B");
            q.pop();
        }
        cout << endl;   
    }
}