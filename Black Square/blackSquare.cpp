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
    }

    return 0;
}
