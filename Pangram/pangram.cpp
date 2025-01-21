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
            if(s[j] > s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i+1]){
            c++;
        }
    }

    return 0;
}
