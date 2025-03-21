#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        for(int i = 0; i < s.size(); i++){
            if(i == 0){
                cout << s[i];
            }
        }
    }

    return 0;
}
