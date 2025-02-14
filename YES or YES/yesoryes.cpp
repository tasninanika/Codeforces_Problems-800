#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    string s;
    for(int i = 0; i < t; i++){
        cin >> s;

        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }


        if(s == "yes"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
