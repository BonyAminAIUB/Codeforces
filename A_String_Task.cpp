#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    string sum = "";
    for(int i = 0; i<s.size(); i++){
        if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){
            sum += '.';
            sum += s[i];
        }
    }
    cout << sum << endl;
    return 0;
}