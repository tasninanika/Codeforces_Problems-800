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

        if(n <= 1){
            cout << "YES" << endl;
        }

        int i = 0, j = n, c = 0;
        while(i < j)){
            if(s[i] == s[j]){
                c++;
            }
        }
    }

    return 0;
}
