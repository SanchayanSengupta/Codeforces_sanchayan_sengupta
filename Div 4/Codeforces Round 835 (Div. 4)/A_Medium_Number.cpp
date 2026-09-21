/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 18:24:22
 * Problem Name : A. Medium Number
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

        int maxi = max({a,b,c});
        int mini = min({a,b,c});
        
        cout << (a+b+c) - (maxi+mini) << endl;
    }
}