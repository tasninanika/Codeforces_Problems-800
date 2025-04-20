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

        int c = 0, max_c = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                c++;
                if(c > max_c){
                    max_c = c;
                }
            }
            else{
                c = 0;
            }
        }

        cout << max_c << endl;
    }

    return 0;
}
