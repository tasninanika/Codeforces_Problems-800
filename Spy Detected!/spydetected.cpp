#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int r = arr[0];

        for(int i = 0; i < n; i++){
            if(arr[0] != arr[i]){
                r = 1;
            }
        }


    }

    return 0;
}
