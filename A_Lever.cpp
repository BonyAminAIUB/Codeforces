#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, sum = 1;
        cin >> n;
        int arr1[n], arr2[n];
        for(int i = 0; i<n; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i<n; i++){
            cin >> arr2[i];
        }
        for(int i = 0; i<n; i++){
           if(arr1[i] > arr2[i]){
                sum += (arr1[i] - arr2[i]);
            }  
        }
        cout << sum << endl;
    }
    return 0;
}