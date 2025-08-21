#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << 1 << " ";

        for(int i = 3; i <= n; i++){
            cout << i << " ";
        }
        if(n >= 2){
          cout << 2;
        }

        cout << endl;
    }

    return 0;
}
