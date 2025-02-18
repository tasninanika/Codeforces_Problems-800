#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << "01" << endl;
    } else if (n == 1) {
        cout << "05" << endl;
    } else {
        cout << "25" << endl;
    }

    return 0;
}
