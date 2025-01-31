#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < m; j++){
            if(i % 2 == 0){
                if(j == m - 1){
                    cout << "#";
                }
            }
            else{
                cout << "#";
            }
        }

    }

    return 0;
}
