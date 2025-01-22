#include<iostream>
using namespace std;

int main(){
    int n, p, q, arr[200], c = 0;
    cin >> n >> p;

    for(int i = 0; i < p; i++){
        cin >> arr[i];
    }

    cin >> q;

    for(int i = p; i < p+q; i++){
        cin >> arr[i];
    }


    for(int i = 0; i < (p+q); i++){
        for(int j = 0; j < (p+q - i - 1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }



    for(int i = 0; i < p+q; i++){
        if(arr[i] != arr[i+1]){
            c++;
        }
    }

    if(c == n){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }



    return 0;
}
