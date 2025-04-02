#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for (int next = n + 1; ; next++) {
        int d;
        for (d = 2; d * d <= next; d++) {
            if (next % d == 0) {
                break;
            }
        }
        if (d * d > next) {
            if (next == m) {
                cout << "YES" << endl;
                return 0;
            }
            break;
        }
    }

    cout << "NO" << endl;
    return 0;
}
