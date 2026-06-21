#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[n];
    }
    sort(v.begin(), v.end());
    if(n == 2){
        cout << "0" << endl;
    }
    else{
        v.pop_back();
    }
    return 0;
}