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

        vector<int> arr;

        for(int i = 0; i < n / 2; i++){
            arr.push_back(i * 2);
        }
    }

    return 0;
}
