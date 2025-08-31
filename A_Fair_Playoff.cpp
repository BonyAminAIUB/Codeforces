#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[4];
        for(int i = 0; i<4; i++){
            cin >> arr[i];
        }
        int p1 = max(arr[0],arr[1]);
        int p2 = max(arr[2],arr[3]);
        int m1 = min(arr[0],arr[1]);
        int m2 = min(arr[2],arr[3]);
        if(m1 > p2 || m2 > p1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}