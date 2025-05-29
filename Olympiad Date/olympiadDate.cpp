#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);

        for(int i = 0; i < n; i++){
            cin >> digits[i];
        }

        string target = "01032025";

