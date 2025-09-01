#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,c1,c2;
        cin >> n;
        int mod = n%3;
        c1 = n / 3;
        c2 = n / 3;
        if(mod == 0){
            cout << c1 << " " << c2 << endl;
        }
        else if(mod == 1){
            cout << c1 + 1 << " " << c2 << endl;
        }
        else if(mod == 2){
            cout << c1 << " " << c2 + 1 << endl;
        }
    }
    return 0;
}