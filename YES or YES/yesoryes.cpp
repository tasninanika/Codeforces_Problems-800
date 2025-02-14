#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    string s;
    for(int i = 0; i < t; i++){
        cin >> s;

        string str = tolower(s);

        if(s == 'yes'){
            cout << "YES" << endl;
        }
    }

    return 0;
}
