#include<iostream>
using namespace std;

int main(){
    int n, c = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i == 1){
            cout << "I hate";
        }
        else if(i % 2 != 0){
            cout << " that I hate";
        }
        else{
            cout << " that I love";
        }
    }

    cout << " it" << endl;

    return 0;
}
