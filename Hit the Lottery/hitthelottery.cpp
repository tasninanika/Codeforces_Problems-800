#include<iostream>
using namespace std;

int main(){
    int n, c = 0;
    cin >> n;

    if(n >= 100){
        n = n - 100;
        c++;
    }
    else if(n >= 20 && n < 100){
        n = n - 20;
        c++;
    }
    else if(n >= 5 && n < 20){
        n = n - 5;
        c++;
    }
    else if(n >= 1 && n < 5){
        n = n - 1;
        c++;
    }
    else{
        n = 0;
    }

    if(n == 0){
        cout << 0 << endl;
    }
    else{
        cout << c << endl;
    }



    return 0;
}
