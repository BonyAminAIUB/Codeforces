#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int cntE = 0;
        int cntO = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] % 2 == 0){
                cntE++;
            }
            else if(arr[i] % 2 != 0){
                cntO++;
            }
        }
        if(cntE == n || cntO == n){
            for(int i = 0; i<n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else{
            sort(arr, arr+n);
            for(int i = 0; i<n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}