#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int h, m;
        cin >> h >> m;

        int total_hour_in_mini = h * 60;
        int total_mini = total_hour_in_mini + m;

        int remaining_time = 1440 - total_mini;
        cout << remaining_time << endl;
    }

    return 0;
}
