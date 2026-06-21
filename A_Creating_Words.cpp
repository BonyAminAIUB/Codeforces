#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        string sub_a = a.substr(1, a.size());
        string sub_b = b.substr(1, b.size());
        
        a.erase(1, a.size());
        b.erase(1, b.size());
        
        cout << b + sub_a << " " << a + sub_b << endl;
    }
    return 0;
}