#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        vector<int> num;

        int n, c = 0;
        cin >> n;

        if(n % 10 != 0){
            num.push_back(n % 10);
        }
        int r;
        r = n % 10;
        n -= r;

        if(n % 100 != 0){
            num.push_back(n % 100);
        }
        r = n % 100;
        n -= r;

        if(n % 1000 != 0){
            num.push_back(n % 1000);
        }
        r = n % 1000;
        n -= r;

        if(n % 10000 != 0){
            num.push_back(n % 10000);
        }
        if(n >= 10000 && n % 10000 == 0){
            num.push_back(n);
        }

        cout << num.size() << endl;

        for(int i = 0; i < num.size(); i++){
            cout << num[i] << " ";
        }

    }

    return 0;
}
