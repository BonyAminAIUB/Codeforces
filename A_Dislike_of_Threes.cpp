#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,i,k = 0;
        cin >> n;
        for(i = 1; i<=1667; i++){
            if(i % 3 == 0 || i % 10 == 3){
                continue;
            }
            k++;
            if(k == n){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}