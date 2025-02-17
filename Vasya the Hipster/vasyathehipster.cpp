#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;

    if(a < b){
        cout << a << " ";
    }
    else{
        cout << b << " ";
    }

    c = abs(a-b);


    return 0;
}
