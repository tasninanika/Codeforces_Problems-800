#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int number;
    while(t--){
        cin >> number;

        int sum1, sum2;
        for(int i = 0; i < number.size(); i++){
            sum1 = number[0] + number[1] + number[2];
            sum2 = number[3] + number[4] + number[5];
        }
        if(sum1 == sum2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
