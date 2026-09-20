#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> dis;

        for(int i=0; i<n;i++){
            int x;
            cin >> x;
            dis.insert(x);
        }

        int dist = dis.size();
        int elem = n - dist;

        if(elem % 2 ==0){
            cout << dist << endl;
        }
        else{
            cout << dist - 1 << endl;
        }

    }

    return 0;
}