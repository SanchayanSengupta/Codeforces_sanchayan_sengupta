/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-27
 * Time : 21:53:00
 * Problem Name : A. Love Story
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        char tar[] = {'c','o','d','e','f','o','r','c','e','s'};
        char str[10];

        for(int i=0; i<10;i++){
            cin >> str[i];
        }

        int count = 0;
        for(int i=0; i<10; i++){
            if(str[i] != tar[i]) count++;
        }

        cout << count << endl;
    }
}