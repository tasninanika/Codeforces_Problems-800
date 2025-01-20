#include<iostream>
using namespace std;

int main(){
    int n, c = 0;
    cin >> n >> c;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            c++;
        }
    }

    if(c != 0){
        cout << "YES" << endl;
    }

    return 0;
}
