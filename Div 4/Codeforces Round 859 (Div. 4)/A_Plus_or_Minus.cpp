/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-25
 * Time : 01:59:05
 * Problem Name : A. Plus or Minus
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        if(a+b==c){
            cout << "+" << endl;
        } else {
            cout << "-" << endl;
        }
    }
}