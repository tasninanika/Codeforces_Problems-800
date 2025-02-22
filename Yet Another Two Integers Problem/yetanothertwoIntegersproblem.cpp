#include<iostream>
using namespace std;

int main(){

    int t, a, b, mov;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        mov = abs(a - b);

        if(a = b){
            cout << 0 << endl;
        }
        else if(mov % 10 == 0){
            cout << mov % 10 << endl;
        }
        else{
            cout << (mov % 10)+1 << endl;
        }
    }

    return 0;
}
