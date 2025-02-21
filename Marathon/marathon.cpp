#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    int a, b, c, d;
    for(int i = 0 ; i < t; i++){
        cin >> a >> b >> c >> d;

        int count = 0;
        if (b > a){
          count++;
        }
        if (c > a){
          count++;
        }
        if (d > a){
          count++;
        }
        cout << count << endl;
    }



    return 0;
}
