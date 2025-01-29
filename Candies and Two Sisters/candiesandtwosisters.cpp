#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;

    long long n, a, b;
    int c = 0;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 1; j <= n; j++){
            b = i;
            a = n - b;
            if(a > b){
                c++;
            }
        }
    }

    cout << c << endl;



    return 0;
}
