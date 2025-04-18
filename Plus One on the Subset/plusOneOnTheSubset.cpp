#include<iostream>
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

            int max_num = max(a[i]);
            int min_num = min(a[i]);
        }

        int minimum_num_of_operations = max_num - min_num;

        cout << minimum_num_of_operations << endl;

    }

    return 0;
}
