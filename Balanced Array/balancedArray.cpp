#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if((n / 2) % 2 != 0){
            cout << "NO" << endl;
            return;
        }

        cout << "YES" << endl;
    }

    return 0;
}
