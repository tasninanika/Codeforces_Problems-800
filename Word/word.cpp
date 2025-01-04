#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int upper = 0, lower = 0;

    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }

    if(upper > lower){
        for(int i = 0; i < s.size(); i++){
            cout << char(toupper(s[i]));
        }
    }
    else{
        for(int i = 0; i < s.size(); i++){
            cout << char(tolower(s[i]));
        }
    }

    return 0;
}
