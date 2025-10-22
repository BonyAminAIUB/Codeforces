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
        sort(arr,arr + n);
        long long int sum = 0;
        for(int i = 0; i<n-1; i++){
            sum += arr[i];
        }
        float avg = (float)sum / (n-1);
        cout << fixed << setprecision(9) << avg + arr[n-1] << endl;
    }
    return 0;
}