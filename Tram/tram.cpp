#include<iostream>
using namespace std;

int main(){

    int n, a, b, passangers = 0, mini = 0;
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> a >> b;
        passangers = passangers - a + b;

        if(passangers > mini){
            mini = passangers;
        }
    }

    cout << mini << endl;



    return 0;
}

