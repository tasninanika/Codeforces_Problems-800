#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<char> completed;
        bool suspicious = false;

        for(int i = 0; i < n; ++i){
            if(i > 0 && s[i] != s[i-1]){
                if(completed.count(s[i])){
                    suspicious = true;
                    break;
                }
            }
            completed.insert(s[i]);
        }

        if(suspicious){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
