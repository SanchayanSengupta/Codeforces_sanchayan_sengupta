/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-26
 * Time : 23:58:43
 * Problem Name : B. Grab the Candies
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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int mihai = 0, bianca = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                mihai += arr[i];
            }
            else{
                bianca += arr[i];
            }
        }

        if(mihai > bianca){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}