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
        unordered_map<char, int> need;

        for (int i = 0; i < target.size(); i++) {
            need[target[i]]++;
        }

        unordered_map<char, int> have;
        int res = 0;

        for (int i = 0; i < n; i++) {
            char d = '0' + digits[i];
            have[d]++;

            bool ok = true;
            for (auto [ch, cnt] : need) {
                if (have[ch] < cnt) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                res = i + 1;
                break;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
