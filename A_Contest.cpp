#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int m1 = (3*a)/10;
    int m2 = a - ((a/250)*c);
    int mx1 = max(m1,m2);

    int v1 = (3*b)/10;
    int v2 = b - ((b/250)*d);
    int mx2 = max(v1,v2);
    if(mx1 > mx2){
        cout << "Misha" << endl;
    }
    else if(mx1 < mx2){
        cout << "Vasya" << endl;
    }
    else{
        cout << "Tie" << endl;
    }
    return 0;
}