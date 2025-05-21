#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if(l == r && l == d && l == u && r == d && r == u && d == u){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
