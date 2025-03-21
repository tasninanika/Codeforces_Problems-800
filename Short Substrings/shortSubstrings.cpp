#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a;
        cin >> a;

        string b;
        for(int i = 0; i < a.size(); i++){
            if(i % 2 != 0){
                continue;
            }
            b += a[i];
        }

        cout << b << endl;
    }

    return 0;
}
