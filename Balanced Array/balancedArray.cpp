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

        vector<int> arr1;
        vector<int> arr2;

        for(int i = 0; i < n / 2; i++){
            arr.push_back(i * 2);
        }

        for(int i = 0; i < n / 2; i++){
            arr.push_back(i * 2 - 1);
        }

        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n / 2; i++){
            sum1 += arr1[i];
        }
        for(int i = 0; i < n / 2; i++){
            sum2 += arr2[i];
        }
    }

    return 0;
}
