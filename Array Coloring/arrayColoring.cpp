#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int even = 0, odd = 0;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(even > 0 && odd >> 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
