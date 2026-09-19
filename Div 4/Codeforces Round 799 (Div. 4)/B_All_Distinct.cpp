#include<iostream>
using namespace std;

int main(){
    int t;
     cin >> t;

     while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i=0; i<n;i++){
            cin >> arr[i];
        }

        int temp[n];
        for(int i=0; i<n;i++){
            temp[i] = arr[i];
        }

        int count = 0;

        for(int i=0; i<n;i++){
            for(int j=i+1; j<n;j++){
                    if(arr[i] == arr[j]){
                    //count++;
                    arr[i] = 0;
                    arr[j] = 0;
                }
            }
        }

        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                count++;
            }
        }

        if(count ==  0 && n%2 == 0 && n>2){
            cout << n/2 << endl;
        }
        else if(count ==  0 && n%2 == 0 && n<=2){
            cout << n-n << endl;
        }
        else{
            cout << count << endl;
        }

        // for(int val:arr){
        //     cout << val << " ";
        // }
        // cout << endl;

        //cout << count << endl;
     }
}