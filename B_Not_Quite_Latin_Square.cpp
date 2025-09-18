#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char s[3][4];
        for(int i = 0; i<3; i++){
            cin >> s[i];
        }
        int fre[3];
        memset(fre,0,sizeof(fre));
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                if(s[i][j] != '?'){
                    int index = s[i][j] - 65;
                    fre[index]++;
                }
            }
        }
        if(fre[0] == 2) 
            cout << "A" << endl;
        else if(fre[1] == 2)
            cout << "B" << endl;
        else
            cout << "C" << endl;
    }
    return 0;
}