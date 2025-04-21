#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int h, m;
        cin >> h >> m;

        int total_hour_in_min = h * 60;
        int total_min = total_hour_in_min + m;

        int remaining_time = 1440 - total_min;
        cout << remaining_time << endl;
    }

    return 0;
}
