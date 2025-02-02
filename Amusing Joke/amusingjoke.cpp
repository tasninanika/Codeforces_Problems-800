#include<iostream>
using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string s4 = s1 + s2;

    for(int i = 0; i < s3.size(); i++){
        for(int j = 0; j < s3.size() - i - 1; j++){
            if(s3[j] > s3[j+1]){
                swap(s3[j],s3[j+1]);
            }
        }
    }

    for(int i = 0; i < s4.size(); i++){
        for(int j = 0; j < s4.size() - i - 1; j++){
            if(s4[j] > s4[j+1]){
                swap(s4[j],s4[j+1]);
            }
        }
    }

    if(s3 == s4){
        cout << "YES" << endl;
    }

    return 0;
}
