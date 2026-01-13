#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    int a = 0, b = 0, c = 0;
    for(auto i : s1){
        if(isVowel(i)){
            a++;
        }
    }
    for(auto i : s2){
        if(isVowel(i)){
            b++;
        }
    }
    for(auto i : s3){
        if(isVowel(i)){
            c++;
        }
    }
    if(a == 5 && b == 7 && c == 5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}