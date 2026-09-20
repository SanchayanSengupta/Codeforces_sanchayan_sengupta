#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;

        string s;
        cin >> s;

        string demo = "Timur";
        sort(demo.begin(), demo.end());

        if(n != 5){
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());
        if(demo == s) cout << "YES" << endl;
        else cout << "NO" << endl;
        

    }

    return 0;
}