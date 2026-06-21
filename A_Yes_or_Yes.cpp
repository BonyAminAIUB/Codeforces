#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count_Y = 0;
        int count_N = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'Y'){
                count_Y ++;
            }
            else{
                count_N ++;
            }
        }
        if(count_N >= count_Y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0; 
}