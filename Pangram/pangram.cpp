#include<iostream>
using namespace std;

int main(){
    int n, c = 0, total;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size()-i-1; j++){
            if(s[j] == s[j+1]){
                c++;
                total = c;
            }
        }
    }

    if(total != 0 ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
