#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n], one = 0, two = 0, sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                one++;
            }
            else if(a[i] == 2){

            }
        }

        if(n % 2 == 0 && sum % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
