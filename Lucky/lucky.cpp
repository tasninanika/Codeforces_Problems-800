#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int number;
    while(t--){
        cin >> number;
        string str = to_string(number);
        int sum1, sum2;
        for(int i = 0; i < str.size(); i++){
            sum1 = str[0] + str[1] + str[2];
            sum2 = str[3] + str[4] + str[5];
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
