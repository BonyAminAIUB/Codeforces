#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<m; i++){
        cin >> b[i];
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i<n; i++){
        sum1 += a[i];
    }
    for(int i = 0; i<m; i++){
        sum2 += b[i];
    }
    if(sum1 == sum2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}