#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int max_num = 0, sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];

        max_num = max(max_num, a[i]);
    }

    for(int i = 0; i < n; i++){
        sum += max_num - a[i];
    }

    cout << sum << endl;

    return 0;
}
