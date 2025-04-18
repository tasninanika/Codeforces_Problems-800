#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n], max_num = a[0], min_num = a[0];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){

        }

        int minimum_num_of_operations = max_num - min_num;

        cout << minimum_num_of_operations << endl;

    }

    return 0;
}
