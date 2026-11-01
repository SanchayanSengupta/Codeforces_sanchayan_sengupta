/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-11-01
 * Time : 17:38:23
 * Problem Name : B. Upscaling
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

        for(int i=1; i<=n; i++){
            if(i % 2 != 0){
                for(int j=1; j<=n; j++){
                    if(j % 2 != 0){
                        cout << "##";
                    }
                    if(j % 2 == 0){
                        cout << "..";
                    }

                }
            cout << endl;
            for(int j=1; j<=n; j++){
                    if(j % 2 != 0){
                        cout << "##";
                    }
                    if(j % 2 == 0){
                        cout << "..";
                    }

                }
            cout << endl;
        }
        if(i % 2 == 0){
                for(int j=1; j<=n; j++){
                    if(j % 2 != 0){
                        cout << "..";
                    }
                    if(j % 2 == 0){
                        cout << "##";
                    }

                }
            cout << endl;
            for(int j=1; j<=n; j++){
                    if(j % 2 != 0){
                        cout << "..";
                    }
                    if(j % 2 == 0){
                        cout << "##";
                    }

                }
            cout << endl;
        }

            }
            
        
    }
}