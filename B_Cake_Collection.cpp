#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        long long int sum = 0;
        vector<int> copy = v;
        while(m--){
            int index = 0;
            for(int i = 1; i < n; i++){
                if(v[i] > v[index]){
                    index = i;
                }
            }
            sum += v[index];     
            v[index] = 0;         
            for(int i = 0; i < n; i++){
                v[i] += copy[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}