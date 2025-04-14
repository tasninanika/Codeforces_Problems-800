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

        for(int left = 0; left < right/2; left++){
            int arr1.push_back(left[i]);
        }

        for(int r = n/2; r < right/2; r--){
            int arr2.push_back(r[i]);
        }

    }

    return 0;
}
