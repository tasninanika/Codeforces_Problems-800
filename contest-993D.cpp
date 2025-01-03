#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;  // length of the array a
        int a[n], b[n];  // arrays to store the input and the result

        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // input array a
        }

        unordered_map<int, int> freq;  // frequency map to store counts of numbers in b
        int current_mode = -1, current_mode_freq = 0;  // initialize mode and its frequency

        // Construct the array b
        for (int i = 0; i < n; ++i) {
            // Set b[i] to the current mode (which should be a[i] in this case)
            b[i] = a[i];

            // Update frequency of a[i]
            freq[a[i]]++;

            // If a[i] becomes the mode, update current_mode and current_mode_freq
            if (freq[a[i]] > current_mode_freq) {
                current_mode = a[i];
                current_mode_freq = freq[a[i]];
            }

            // Ensure that a[i] is the mode of [b1, b2, ..., bi] by updating the mode logic
            if (freq[a[i]] == current_mode_freq) {
                current_mode = a[i];
            }
        }

        // Output the array b
        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
