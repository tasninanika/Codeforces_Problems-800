#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int max_num = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];

        max_num = max(max_num, a[i]);

    }

    cout << max_num;

    return 0;
}
