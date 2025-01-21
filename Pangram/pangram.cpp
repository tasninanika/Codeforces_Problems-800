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
        if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z'){
            c++;
        }
    }

    if(c == 26 ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
