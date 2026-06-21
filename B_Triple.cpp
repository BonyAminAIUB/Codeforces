#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        vector<int> v1 = v;
        unique(v1.begin(),v1.end());
        
        for(int u : v){
            int cnt = count(v.begin(), v.end(),u);
            if(cnt >= 3){
                cout << u << endl;
                break;
            }
            else{
                cout << "-1" << endl;
                break;
            }
        }
    }
    return 0;
}