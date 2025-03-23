#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < b.size(); j++){
                swap(a[0],b[0]);
            }
        }

        cout << a << " " << b << endl;

    }

    return 0;
}
