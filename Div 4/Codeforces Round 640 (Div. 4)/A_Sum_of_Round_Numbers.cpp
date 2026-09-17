#include <iostream>
#include<math.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int temp = n;
        int rem;
        int count = 0;
        int coun = 0;
        while(temp !=0){
            
            rem = temp % 10;
            temp = temp/10;
            if(rem != 0) coun++;
        }
        cout << coun << endl;

        while(n != 0){

            rem = n % 10;
            n = n/10;
            
            if(rem != 0){
                cout << rem * pow(10, count) << " ";
            }
            count++;
            
        }
        cout << endl;
     }

    return 0;
}