#include <iostream>
using namespace std;

int main() {
    int t, k;
    cin >> t;

    while (t--) {
        cin >> k;
        int count = 0, num = 0;

        while (count < k) {
            num++;
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
            }
        }

        cout << num << endl;
    }

    return 0;
}

