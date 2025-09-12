#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0;
    cin >> n;
    for(int i = 1; i<n; i++){
        for(int j = i+1; j<n; j++){
            int c = sqrt(i*i + j*j);
            if(c <= n && c*c == i*i + j*j){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}