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
        }

        int maxProduct = 0;

        for(int i = 0; i < n; i++){
             int product = 1;
             for(int j = 0; j < n; j++){
                if(i == j){
                    product *= (a[j] + 1);
                }
                else {
                    product *= a[j];
                }
             }

             if(product > maxProduct){
                    maxProduct = product;
            }
        }


        cout << maxProduct << endl;

    }

    return 0;
}
