#include<iostream>
using namespace std;

int main(){
    long long n, A = 0, D = 0;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            A++;
        }
        else{
            D++;
        }
    }

    if(A > D){
            cout << "Anton" << endl;
        }
        else if(A < D){
            cout << "Danik" << endl;
        }
        else{
            cout << "Friendship" << endl;
        }

    return 0;
}
