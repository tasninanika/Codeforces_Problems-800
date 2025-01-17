#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    string number1 = to_string(num1);
    string number2 = to_string(num2);
    for(int i = 0; i < number1.size(); i++){
            if(number1[i] == number2[i]){
                cout << 0;
            }
            else{
                cout << 1;
            }
    }


    return 0;
}
