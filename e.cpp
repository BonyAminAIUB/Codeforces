//381A - Sereja and Dima
#include <bits/stdc++.h>

using namespace std;

int main(){

   int n, ser = 0, dima = 0, move = 1;
   cin >> n;
   vector<int> num(n);
   for(int i = 0; i<n; i++){
      cin >> num[i];
   }
   while(n--){
      if(move == 1){
         if(num[0] < num[n]){
            ser += num[n];
            num.pop_back();
         }
         else{
            ser += num[0];
            num.erase(num.begin());
         }
         move = 2;
      }
      else if(move == 2){
         if(num[0] < num[n]){
            dima += num[n];
            num.pop_back();
         }
         else{
            dima += num[0];
            num.erase(num.begin());
         }
         move = 1;
      }
   }
   cout << ser << " " << dima;
    
   return 0;
}