#include<iostream>
using namespace std;

int main(){

    int t, c = 0;
    cin >> t;

    int a, b, c, d;
    for(int i = 0 ; i < t; i++){
        cin >> a >> b >> c >> d;

        if(a > b){
            c++;
        }
        else if(a > c){
            c++;
        }
        else if(a > d){
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
