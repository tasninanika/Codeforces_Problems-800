#include<iostream>

using namespace std;
int main(){
    int k, n, w, total = 0, money, borrow;
    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++){
        money = k * i;
        total += money;

    }
    if(n < total){
        borrow = total - n;
        cout << borrow;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}
