/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 18:37:24
 * Problem Name : B. Atilla's Favorite Problem
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

        sort(s.begin(), s.end());
        cout << ((int)s[n-1] - 97) + 1 << endl;
        
    }
}