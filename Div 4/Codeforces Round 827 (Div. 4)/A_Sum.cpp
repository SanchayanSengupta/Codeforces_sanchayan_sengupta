/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 17:11:22
 * Problem Name : A. Sum
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b , c;
        cin >> a >> b >> c;

        if((a == b+c) || (b == a+c) || (c == a+b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}