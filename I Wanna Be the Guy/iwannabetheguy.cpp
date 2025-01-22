#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p, q;
    cin >> p >> q;

    int arr[p];
    for(int i = 0; i < p; i++){
        cin >> arr[i];
    }

    int arr[p];
    for(int i = 0; i < p; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        p[n + i] = q[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(p[j] > p[j+1]){
                swap(p[j], p[j+1]);
            }
        }
    }

    for (int i = 0; i < 2 * n; i++) {
        cout << p[i] << " ";
    }


    return 0;
}
