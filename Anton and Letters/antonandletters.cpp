#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size() - i - 1; j++){
            if(s[j] > s[j+1] && s[j] != '{' && s[j] != '}' && s[j] != ','){
                swap(s[j],s[j+1]);
            }
        }
    }
    cout << s << endl;

    return 0;
}
