#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int arr[n];
    int c = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == arr[i+1]){
            c++;
        }
    }

    cout << c << endl;



    return 0;
}
