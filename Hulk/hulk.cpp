#include<iostream>
using namespace std;

int main(){
    int n, c = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        if(n == i){
            cout << "I hate";
            c++;
        }
        else if(c == i){
            cout << "I hate that I love it";
            c++;
        }
        else{
            cout << "I hate that I love it I hate it";
            c++;
        }
    }

    cout << " it" << endl;

    return 0;
}
