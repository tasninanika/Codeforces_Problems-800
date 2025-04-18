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

        int max_num = max(a, a + n);
        int min_num = min(a, a + n);

        int minimum_num_of_operations = max_num - min_num;

        cout << minimum_num_of_operations << endl;

    }

    return 0;
}
