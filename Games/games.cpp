#include<iostream>
using namespace std;

int main(){
    int n, c = 0;
    cin >> n;

    int h[n], a[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(h[i] == a[j] ){
                c++;
            }
        }
    }

    cout << c << endl;

    return 0;
}
