#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size() - i - 1; j++){
            if(s[j] > s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }

    return 0;
}
