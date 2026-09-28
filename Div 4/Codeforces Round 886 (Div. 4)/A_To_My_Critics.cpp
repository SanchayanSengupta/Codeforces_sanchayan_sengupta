/**
 *
 * Author : Sanchayan Sengupta
 * Date : 2026-09-28
 * Time : 18:42:47
 * Problem Name : A. To My Critics
 *
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<int> vec;
        for(int i=0; i<3; i++){
            int x;
            cin >> x;
            vec.push_back(x);
        }

        sort(vec.begin(), vec.end());

        if(vec[1] + vec[2] >= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}