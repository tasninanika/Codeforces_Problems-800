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
            cout << n % 10 << " ";
            c++;
        }
        int r;
        r = n % 10;
        n -= r;

        if(n % 100 != 0){
            cout << n % 100 << " ";
            c++;
        }
        r = n % 100;
        n -= r;

        if(n % 1000 != 0){
            cout << n % 1000 << " ";
            c++;
        }
        r = n % 1000;
        n -= r;

        if(n % 10000 != 0){
            cout << n % 10000 << " ";
            c++;
        }
        if(n >= 10000 && n % 10000 == 0){
            cout << n % 10000 << " ";
            c++;
        }

        cout << c;


    }

    return 0;
}
