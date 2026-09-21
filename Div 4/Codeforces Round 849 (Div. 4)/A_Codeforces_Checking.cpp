/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 19:11:12
 * Problem Name : A. Codeforces Checking
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        char ch;
        cin >> ch;

        string chk = "codeforces";
        int count = 0;

        for(int i=0; i<chk.size();i++){
            if(ch == chk[i]) count ++;
        }

        if(count > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}