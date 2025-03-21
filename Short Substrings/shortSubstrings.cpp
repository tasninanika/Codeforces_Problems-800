#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        for(int i = 0; i < s.size(); i++){
            if(i % 3 == 0){
                continue;
            }
        }

        cout << s << endl;
    }

    return 0;
}
