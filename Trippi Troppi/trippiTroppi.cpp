#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string s;
        getline(cin, s);

        cout << s[0];

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                cout << s[i+1];
            }
        }
        cout << endl;
    }

