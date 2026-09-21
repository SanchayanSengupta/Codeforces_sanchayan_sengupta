/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 19:17:35
 * Problem Name : B. Following Directions
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x=0, y=0, count=0;

        for(int i=0; i<n;i++){
            if(s[i] == 'U') y++;
            if(s[i] == 'D') y--;
            if(s[i] == 'L') x--;
            if(s[i] == 'R') x++;

            if(x==1 && y==1) count ++;
        }

        if(count > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}