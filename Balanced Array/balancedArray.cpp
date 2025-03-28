#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if((n / 2) % 2 != 0){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<int> arr1;
        vector<int> arr2;

        for(int i = 1; i <= n / 2; i++){
            arr1.push_back(i * 2);
        }

        for(int i = 0; i < n / 2; i++){
            arr2.push_back(i * 2 + 1);
        }

        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n / 2; i++){
            sum1 += arr1[i];
        }
        for(int i = 0; i < n / 2; i++){
            sum2 += arr2[i];
        }

        int last_odd = sum1 - sum2;
        arr2.push_back(last_odd);

        for(int i = 0; i < arr1.size(); i++){
            cout << arr1[i] << " ";
        }

        for(int i = 0; i < arr2.size(); i++){
            cout << arr2[i] << " ";
        }

    }

    return 0;
}
