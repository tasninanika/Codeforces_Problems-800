#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int max_num = a[0], min_num = a[0];

        for(int i = 0; i < n; i++){
            max_num = max(max_num, a[i]);
            min_num = min(min_num, a[i]);
        }

        int minimum_num_of_operations = max_num - min_num;

        cout << minimum_num_of_operations << endl;

    }

    return 0;
}
