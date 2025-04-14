#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int l = s.size();

        if(l % 2 != 0){
            cout << "NO" << endl;
            continue;
        }

        vector<char> arr1, arr2;

        for(int i = 0; i < l/2; i++){
            arr1.push_back(s[i]);
        }

        for(int i = l/2; i < l; i++){
            arr2.push_back(s[i]);
        }

        for(int i = 0; i < arr1.size(); i++){
            if(arr1[i] != arr2[i]){
                cout << "NO" << endl;
                break;
            }
        }

        if(int i == arr1.size()){
            cout << "YES" << endl;
        }
    }

    return 0;
}
