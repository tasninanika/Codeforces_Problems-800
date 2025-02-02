#include<iostream>
using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string s4 = s1 + s2;

    for(int i = 0; i < s3.size(); i++){
        for(int j = 0; j < s3.size() - i - 1; j++){
            if(s[j] > s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }

    return 0;
}
