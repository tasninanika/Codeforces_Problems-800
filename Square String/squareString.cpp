#include<iostream>
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

        for(int i = l/2; i < l/2; i--){
            arr2.push_back(s[i]);
        }

        for(int i = 0; i < arr1.size(); i++){

        }

    }

    return 0;
}
