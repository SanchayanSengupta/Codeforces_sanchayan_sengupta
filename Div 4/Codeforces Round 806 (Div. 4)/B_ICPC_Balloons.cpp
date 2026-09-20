#include <iostream>
#include<set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> dis;

        for(int i=0; i<n;i++){
            char x;
            cin >> x;
            dis.insert(x);
        }

        int dist = dis.size();
        int copy = n - dist;

        cout << (dist*2)+copy << endl;

    }

    return 0;
}