#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int next = n + 1; next <= m; next++){
        for(int d = 2; d < next; d++){
            if(next % d == 0){
                break;
            }
        }
        if(d == next){
            if(next == m){

            }
        }
    }

    return 0;
}
