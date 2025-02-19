#include<iostream>

using namespace std;

int main(){

    int n, sereja = 0, dima = 0;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    if(n % 2 == 0){
      for(int i = 0; i < n/2; i++){
        sereja += arr[i];
      }
    }

    cout << sereja << " ";


    return 0;
}
