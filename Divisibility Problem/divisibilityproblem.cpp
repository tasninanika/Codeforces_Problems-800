#include<iostream>
using namespace std;

int main(){
    int t, a, b, r;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        if(a % b == 0){
            cout << 0 << endl;
        }
        else{
            r = b -(a % b);
            cout << r << endl;
        }
    }
    return 0;
}
