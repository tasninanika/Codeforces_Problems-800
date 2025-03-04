#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int a, b, c;
    while(t--){
        cin >> a >> b >> c;

        if(a > b && a < c || a > c && a < b){
            cout << a << endl;
        }
        else if(a < b && b < c || a > b && b > c){
            cout << b << endl;
        }
        else if(a < c &&  c < b || a > c && b < c)
    }


    return 0;
}
