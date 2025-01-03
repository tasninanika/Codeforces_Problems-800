#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; i++) {
            cin >> r[i];
            r[i]--; // Convert to 0-based index
        }

        vector<int> plushies(n, 1); // Each spider starts with 1 plushie
        int year = 0;

        // To track the number of plushies each spider has
        while (true) {
            year++;
            vector<int> new_plushies(n, 0);
            for (int i = 0; i < n; i++) {
                if (plushies[i] > 0) {
                    new_plushies[r[i]]++; // Give plushie to recipient
                }
            }

            // Each spider can only keep 1 plushie
            for (int i = 0; i < n; i++) {
                plushies[i] = min(new_plushies[i], 1);
            }

            // Check for stability
            if (year > 1) { // Year 1 can never be stable
                bool stable = true;
                for (int i = 0; i < n; i++) {
                    if (plushies[i] != 1) {
                        stable = false;
                        break;
                    }
                }
                if (stable) {
                    break;
                }
            }
        }

        cout << year << "\n";
    }

    return 0;
}
