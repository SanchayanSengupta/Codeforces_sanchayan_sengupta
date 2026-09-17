#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        string ch;
        cin >> ch;

        if(ch[0] == 'a' || ch[1] == 'b' || ch[2] == 'c') cout << "YES" << endl;
        else cout << "NO" << endl;
     }

    return 0;
}