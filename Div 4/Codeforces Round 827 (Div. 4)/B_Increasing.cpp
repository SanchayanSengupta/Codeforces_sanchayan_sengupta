/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 17:33:44
 * Problem Name : B. Increasing
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

        int arr[n];
        set<int> dist;

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            arr[i] = x;
            dist.insert(x);
        }

        int sz = dist.size();
        
        if(n == sz) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}