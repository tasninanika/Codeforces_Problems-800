#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, m;
        cin >> n >> m;

        long long result = max(n, m) + 1;

        cout << result << endl;
    }

    return 0;
}
