#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n], one = 0, two = 0, sum;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                one++;
            }
            else if(a[i] == 2){
                two++;
            }
        }

        sum = one + (2 * two);

        if(one == 0 && two % 2 != 0){
            cout << "NO" << endl;
        }
        else if(sum % 2 != 0){
            cout << "NO" << endl;
        }
    }

    return 0;
}
