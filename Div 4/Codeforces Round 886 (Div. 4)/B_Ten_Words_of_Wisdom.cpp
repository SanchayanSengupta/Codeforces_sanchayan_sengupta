/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-10-29
 * Time : 16:28:21
 * Problem Name : B. Ten Words of Wisdom
 *
 **/

int chk(int temp[], int arr1[], int arr2[], int n){
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(temp[i] == arr2[j] && arr1[j] <= 10) {
                    return j+1;
                }
            }
        }
 }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr1[n], arr2[n];

        for(int i=0; i<n; i++){
            cin >> arr1[i] >> arr2[i];
        }

        int temp[n];
        for(int i=0; i<n; i++){
            temp[i] = arr2[i];
        }

        sort(temp, temp + n, greater<int>());

        cout << chk(temp, arr1, arr2, n) << endl;

    }
}