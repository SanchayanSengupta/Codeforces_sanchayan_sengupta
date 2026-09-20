#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;

        string r1, r2;
        cin >> r1 >> r2;

        for(int i=0; i<n;i++){
            if(r1[i] == 'G') r1[i] = 'B';
            if(r2[i] == 'G') r2[i] = 'B';
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(r1[i] == r2[i]){
                count++;
            }
        }

        if(n == count) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}