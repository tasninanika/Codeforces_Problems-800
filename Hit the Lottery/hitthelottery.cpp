#include<iostream>
using namespace std;

int main(){
    int n, c = 0;
    cin >> n;

    if(n >= 100){
        n = n - 100;
        c++;
    }

    return 0;
}
