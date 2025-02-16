#include<iostream>
using namespace std;

int main(){

    int x[4];
    for(int i = 0; i < 4; i++){
        cin >> x[i];
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i - 1; j++){
            if(x[j] > x[j+1]){
                swap(x[j],x[j+1]);
            }
        }
    }

    return 0;
}
