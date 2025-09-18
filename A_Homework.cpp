#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        string s1,s2,s3;
        cin >> a >> s1 >> b >> s2 >> s3;
        for(int i = 0; i<s2.size(); i++){
            if(s3[i] == 'D'){
                s1.push_back(s2[i]);
            }
            else if(s3[i] == 'V'){
                s1 = s2[i] + s1;
            }
        }
        cout << s1 << endl;
    }
    return 0;
}