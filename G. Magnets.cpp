#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){
        int val;
        cin >> val; 
        v.push_back(val);
    }
    int count = 1;
    for(int i = 1; i<v.size(); i++){
        if(v[i] != v[i-1]){
           count ++;
        }
    }
    cout << count;
    return 0;
}