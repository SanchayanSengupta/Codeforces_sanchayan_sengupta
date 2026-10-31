/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-10-30
 * Time : 13:29:28
 * Problem Name : B. Not Quite Latin Square
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        
        char arr[3][3];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> arr[i][j];
            }
        }

        int temp = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(arr[i][j] == '?'){
                    temp = i;
                }
            }
        }

        int count = 0;
        for(int i=temp; i<=temp; i++){
            for(int j=0; j<3; j++){
                count = count + (int)arr[i][j];
            }
        }

        int chk = 'A' + 'B' + 'C' + '?';
        cout << (char)(chk-count) << endl;
    }
}