#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int value = 0;
    while(n--){
        string s;
        cin >> s;
        if(s == "++X" || s == "X++"){
            value++;
        }
        else{
            value--;
        }
    }
    cout << value << endl;
    return 0;
}