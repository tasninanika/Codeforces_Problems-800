#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

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

    return 0;
}
