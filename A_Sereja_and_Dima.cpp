#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<v.size(); i++){
        cin >> v[i];
    }
    int s = 0,d = 0;
    int turn = 1;
    while(!v.empty()){
        if(v.front() > v.back()){
            if(turn == 1){
                s += v.front();
                v.erase(v.begin());
                turn = 0;
            }
            else{
                d += v.front();
                v.erase(v.begin());
                turn = 1;
            }
        }
        else{
            if(turn == 1){
                s += v.back();
                v.pop_back();
                turn = 0;
            }
            else{
                d += v.back();
                v.pop_back();
                turn = 1;
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}