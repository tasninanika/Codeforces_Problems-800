#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string b;
        cin >> b;

        string a;

        for(int i = 0; i < b.size(); i+=2){
            a += b[i];
        }

        cout << a << endl;
    }

    return 0;
}
