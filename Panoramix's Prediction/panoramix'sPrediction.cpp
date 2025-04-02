#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int next = n + 1; next <= m; next++){
        int d;
        for(d = 2; d < next; d++){
            if(next % d == 0){
                break;
            }
        }
        if(d == next){
            if(next == m){
                cout << "YES" << endl;
                return 0;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    return 0;
}
