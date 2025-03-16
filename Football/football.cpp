#include <iostream>
using namespace std;

int main() {
    int n, count1 = 0, count2 = 0;
    cin >> n;

    string team1, team2, team;
    cin >> team1;
    count1++;

    for (int i = 1; i < n; i++) {
        cin >> team;
        if (team == team1) {
            count1++;
        } else {
            team2 = team;
            count2++;
        }
    }

    cout << (count1 > count2 ? team1 : team2) << endl;
    return 0;
}
