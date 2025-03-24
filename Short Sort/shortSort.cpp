#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int c = 0;

        if(s == 'abc'){
            cout << "YES" << endl;
        }
        for(int i = 0; i < s.size(); i++){
            for(j = 0; j < s.size(); j++){
                if(s[j] > s[j+1]){
                    swap(s[j],s[j+1]);
                    c++;
                }
            }
        }
        if(c == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
