#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    string s = "codeforces";
    char c;
    while(t--){
        cin >> c;
        int l = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c){
                l++;
            }
        }

    }

    return 0;
}
