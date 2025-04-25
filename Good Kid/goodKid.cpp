#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, a[n];
        cin >> n;

        int mini = a[0];
        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(mini > a[i]){
                mini = a[i];
            }
        }

        mini += 1;

        int product = 1;
        for(int i = 0; i < n; i++){
            product += a[i];
        }

    }

    return 0;
}
