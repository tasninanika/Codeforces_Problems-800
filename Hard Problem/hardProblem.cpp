#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long row1 = min(m, a);
        long long row2 = min(m, b);

        long long remainingRow1 = m - row1;
        long long remainingRow2 = m - row2;

    }


    return 0;
}
