/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-10-30
 * Time : 13:19:32
 * Problem Name : B. Good Kid
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

        sort(arr, arr + n);
        arr[0] = arr[0] + 1;

        int prod = 1;
        for(int i=0; i<n; i++){
            prod = prod * arr[i];
        }

        cout << prod << endl;
    }
}