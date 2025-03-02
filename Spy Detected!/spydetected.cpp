#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }


        if (arr[0] != arr[1] && arr[0] != arr[2]) {
            cout << 1 << endl;
        } else if (arr[1] != arr[0] && arr[1] != arr[2]) {
            cout << 2 << endl;
        } else {
            for (int i = 2; i < n; i++) {
                if (arr[i] != arr[0]) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
