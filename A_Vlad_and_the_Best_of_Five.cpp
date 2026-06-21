#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt_A = 0;
        int cnt_b = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'A'){
                cnt_A ++;
            }
            else if(s[i] == 'B'){
                cnt_b ++;
            }
        }
        if(cnt_A > cnt_b) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
    return 0;
}