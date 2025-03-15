#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int y[n], c = 0;
    for(int i = 0; i < n; i++){
        cin >> y[i];
    }

    for(int i = 0; i < n; i++){
        if(5 - y[i] >=k){
            c++;
        }
    }

    cout << c / 3 << endl;

    return 0;
}
