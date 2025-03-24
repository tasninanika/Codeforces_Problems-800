#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s == 'abc'){
            cout << "YES" << endl;
        }
        for(int i = 0; i < s.size(); i++){
            for(j = 0; j < s.size(); j++){
                if(s[j] > s[j+1]){

                }
            }
        }
    }

    return 0;
}
