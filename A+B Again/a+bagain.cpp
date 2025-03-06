#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;


    int n;
    int first_digit, sec_digit, sum = 0;

    while(t--){
        cin >> n;

        sec_digit = n % 10;
        first_digit = n / 10;
        sum = first_digit + sec_digit;

        cout << sum << endl;
    }

    return 0;
}
