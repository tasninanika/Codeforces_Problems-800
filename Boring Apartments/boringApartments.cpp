#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        int last_digit = x % 10;
        int l = 0;
        int y = x;

        while(y > 0){
            l++;
            y /= 10;
        }

        int result = (last_digit - 1) * 10 + (l * (l + 1)) / 2;
    }

    return 0;
}
