#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(mini > a[i]){
                mini = a[i];
            }
        }

        mini += 1;

        int product = 1;
        for(int i = 0; i < n; i++){
            product *= a[i];
        }

        cout << product << endl;

    }

    return 0;
}
