//Restoring Three Numbers

#include <iostream>
using namespace std;
int main(){
    int arr[4];

    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
     
    for(int i = 0; i<4; i++){
        for(int j = 0; j<3-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int a = arr[3] - arr[1];
    int b = arr[3] - arr[2];
    int c = arr[3] - arr[0];
    
    cout << a << " " << b << " " << c << endl;

    return 0;
}