#include<iostream>
using namespace std;

int main(){
    int c = 0;
    string s;
    getline(cin,s);

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size() - i - 1; j++){
            if(s[j] > s[j+1] && s[j] != '{' && s[j] != '}' && s[j] != ','){
                swap(s[j],s[j+1]);
            }
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i+1] && s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' '){
            c++;
        }
    }


    cout << c << endl;

    return 0;
}
