#include<bits/stdc++.h>

using namespace std;
int main(){
    int k,n,w;
    cin >> k >> n >> w;
    int total = (w * (w+1)) / 2;
    int cost = total * k;
    if(cost > n){
        cout << cost - n << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}