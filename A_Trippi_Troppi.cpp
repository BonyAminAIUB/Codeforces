#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        string sum;
        sum.push_back(s1[0]);
        sum.push_back(s2[0]);
        sum.push_back(s3[0]);
        cout << sum << endl;
    }
    return 0;
}