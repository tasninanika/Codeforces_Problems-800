#include<iostream>
using namespace std;

int main(){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int total = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            total += a1;
        }
        else if(s[i] == '2'){
            total += a2;
        }
        else if(s[i] == '3'){
            total += a3;
        }
    }

    return 0;
}
