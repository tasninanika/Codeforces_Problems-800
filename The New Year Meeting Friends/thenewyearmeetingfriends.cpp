#include<iostream>
using namespace std;

int main(){
    int x1, x2, x3, total;
    cin >> x1 >> x2 >> x3;

    total = x1 + x2 + x3;

    if(total % 2 == 0){
        cout << total / 2 << endl;
    }
    else{
        cout << (total  / 2) + 1 << endl;
    }

    return 0;
}
