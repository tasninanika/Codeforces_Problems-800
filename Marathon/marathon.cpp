#include<iostream>
using namespace std;

int main(){

    int t, x = 0;
    cin >> t;

    int a, b, c, d;
    for(int i = 0 ; i < t; i++){
        cin >> a >> b >> c >> d;

        if(a > b){
            x++;
        }
        else if(a > c){
            x++;
        }
        else if(a > d){
            x++;
        }
    }

    cout << x << endl;

    return 0;
}
