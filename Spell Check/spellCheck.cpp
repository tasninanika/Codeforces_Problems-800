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

        int c = 0;
        for(int i = 0; i < n; i++){
            if(n == 5 && s[i] == 'T'){
                c++;
            }
        }

        if(c != 1){
            cout << "NO" << endl;
        }
    }

    return 0;
}
