#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = (n - y) / x * x + y;

        cout << k << endl;
    }

    return 0;
}
