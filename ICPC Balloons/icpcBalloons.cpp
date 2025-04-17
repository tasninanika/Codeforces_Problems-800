#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c = 0, i = 0, j = n;
        while(i < j){
           if(s[i] == s[j]){
                c += 2;
           }

        }

    }

    return 0;
}
