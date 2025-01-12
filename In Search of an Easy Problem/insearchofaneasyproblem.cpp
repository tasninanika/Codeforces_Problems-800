#include<iostream>
using namespace std;

int main(){
    int n, arr[100], sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    if(sum != 0){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }




    return 0;
}
