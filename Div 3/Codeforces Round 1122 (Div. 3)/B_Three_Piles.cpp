/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 21:14:38
 * Problem Name : B. Three Piles
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;

        cout << max(abs(a-b),(a+c-b)) << endl;

    }
}