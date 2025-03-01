#include<iostream>
using namespace std;

int main(){
    string s, ternary_num = "";
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            ternary_num += '0';
        }
        else if(s[i] == '-' && i < s.size()){
            if(s[i+1] == '.'){
                ternary_num += '1';
                i++;
        }
            else if(s[i+1] == '-'){
                ternary_num += '2';
                i++;
            }
        }
    }

    cout << ternary_num << endl;

    return 0;
}
