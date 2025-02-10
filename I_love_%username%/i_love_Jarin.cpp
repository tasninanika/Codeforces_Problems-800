#include<iostream>
using namespace std;

int main(){

    int n, c = 0;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
            c++;
        }
        if(arr[i] < minimum){
            minimum = arr[i];
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
