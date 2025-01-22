#include<iostream>
using namespace std;

int main(){
    int n, pos1 = 0, pos2 = 0, min_sec, temp;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max_num = arr[0];
    for(int i = 1; i < n; i++){
        if(max_num < arr[i]){
            max_num = arr[i];
            pos1 = i;
        }
    }
     for (int i = pos1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = max_num;


    int min_num = arr[0];
    for(int i = 1; i < n; i++){
        if(min_num >= arr[i]){
            min_num = arr[i];
            pos2 = i;
        }
    }

    min_sec = pos1 + (n - pos2 - 1);

    if(min_sec < 0){
        cout << 0 << endl;
    }
    else{
        cout << min_sec << endl;
    }


    return 0;
}
