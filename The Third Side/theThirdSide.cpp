#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            minHeap.push(num);
        }

        while (minHeap.size() > 1) {
            int first = minHeap.top(); minHeap.pop();
            int second = minHeap.top(); minHeap.pop();

            int combined = first + second - 1;
            minHeap.push(combined);
        }

        cout << minHeap.top() << endl;
    }

    return 0;
}

