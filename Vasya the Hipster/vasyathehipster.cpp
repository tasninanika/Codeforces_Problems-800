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
    if(c == 1){
        cout << "0";
    }
    else{
        cout << abs(c / 2);
    }

    return 0;
}
