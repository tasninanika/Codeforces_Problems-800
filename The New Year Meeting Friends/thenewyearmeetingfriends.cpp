#include<iostream>
using namespace std;

int main(){
    int arr[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << ((arr[2]-arr[1])+(arr[1]-arr[0]));

    return 0;
}
