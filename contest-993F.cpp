#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n), b(m);
    long long sum_a = 0, sum_b = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        sum_b += b[i];
    }

    long long initial_beauty = sum_a * sum_b;

    unordered_set<long long> possible_beauties;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            long long beauty_after_operation = initial_beauty - (sum_b * a[r]) - (sum_a * b[c]) + (long long)a[r] * b[c];
            possible_beauties.insert(beauty_after_operation);
        }
    }

    while (q--) {
        long long x;
        cin >> x;
        if (possible_beauties.find(x) != possible_beauties.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
