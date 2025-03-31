#include<bits/stdc++.h>
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
        else if(s[i] == '4'){
            total += a4;
        }
    }

    cout << total << endl;

    return 0;
}
