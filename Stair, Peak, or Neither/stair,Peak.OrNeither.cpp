#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if(a < b < c){
            cout << "STAIR" << endl;
        }
        else if(a < b > c){
            cout << "PEAK" << endl;
        }

    }

    return 0;
}
