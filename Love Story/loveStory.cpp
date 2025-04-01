#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string s1 = 'codeforces';
        int c = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] != s1[i]){
                c++;
            }
        }

        cout << c << endl;
    }

    return 0;
}
