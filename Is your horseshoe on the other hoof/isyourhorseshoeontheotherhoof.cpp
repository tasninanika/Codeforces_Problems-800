#include<iostream>
using namespace std;

int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    int c = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i < 4; i++){
        if(arr[i] == arr[i+1]){
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
