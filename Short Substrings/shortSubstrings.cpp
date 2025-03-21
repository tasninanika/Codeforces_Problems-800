#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a;
        cin >> a;

        string b;
        b += a[0];

        for(int i = 0; i < a.size(); i++){
            if(a[i] != a[i-1]){
                b += a[i];
            }
        }

        cout << b << endl;
    }

    return 0;
}
