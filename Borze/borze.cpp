#include<iostream>
using namespace std;

int main(){
    string s, ternary_num = "";
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            s[i] = '0';
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            s[i] = '1';
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            s[i] = '2';
        }
    }

    cout << s << endl;

    return 0;
}
