/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-10-31
 * Time : 19:40:22
 * Problem Name : B. Vlad and Shapes
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

        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == arr[i+1] && arr[i] != 0) count++;
        }

        if(count > 0) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;
    }
}