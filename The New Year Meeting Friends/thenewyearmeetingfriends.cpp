#include<iostream>
using namespace std;

int main(){
    int x1, x2, x3, total;
    cin >> x1 >> x2 >> x3;

    total = x1 + x2 + x3;

    if(total % 2 == 0){
        cout << total / 3 << endl;
    }
    else{
        cout << (total  / 3) + 1 << endl;
    }

    return 0;
}
