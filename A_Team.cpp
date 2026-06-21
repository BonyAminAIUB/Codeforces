#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int solve = 0;
    while(n--){
        int a,b,c;
        int count = 0;
        cin >> a >> b >> c;
        if(a == 1){
            count++;
        }
        if(b == 1){
            count++;
        }
        if(c == 1){
            count++;
        }
        if(count >= 2){
            solve++;
        }
    }
    cout << solve << endl;
    return 0;
}