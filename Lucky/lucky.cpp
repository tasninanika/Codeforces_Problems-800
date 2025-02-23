#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int number;
        cin >> number;

        int last3 = number % 1000;
        int first3 = number / 1000;

        int sum1 = (first3 / 100) + ((first3 / 10) % 10) + (first3 % 10);
        int sum2 = (last3 / 100) + ((last3 / 10) % 10) + (last3 % 10);

        if (sum1 == sum2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
