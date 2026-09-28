/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-28
 * Time : 16:48:55
 * Problem Name : B. Blank Space
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
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int count = 0, maxi = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0) {
                count++;
            }
            if(arr[i] == 1){
                count = 0;
            }
            maxi = max(maxi, count);
        }

        cout << maxi << endl;
    }
}