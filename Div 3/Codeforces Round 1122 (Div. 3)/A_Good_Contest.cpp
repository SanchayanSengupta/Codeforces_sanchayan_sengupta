/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-21
 * Time : 20:41:27
 * Problem Name : A. Good Contest
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

        int arr[3];
        for(int i=0;i<3;i++){
            cin >> arr[i];
        }

        int mini, count = 0;
        for(int i=0; i<3;i++){
            if(arr[i] == n) count++;
        }

        mini = min({arr[0], arr[1], arr[2]});

        if(count == 3){
            cout << "0" << endl;
        }
        else{
            cout << n - mini << endl;
        }
    }
}