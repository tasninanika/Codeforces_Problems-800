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
            arr[i] = maximum;
            c++;
        }
    }

    return 0;
}
