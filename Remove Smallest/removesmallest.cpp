#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[50];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                cout << "NO" << endl;
                goto next_case;
            }
        }
        cout << "YES" << endl;
        next_case:;
    }
    return 0;
}

