#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int a, b, c;
    while(t--){
        cin >> a >> b >> c;

        if(a > b && a < c){
            cout << a << endl;
        }
    }


    return 0;
}
