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
                else{
                    cout << ".";
                }
            }
            else if(1 % 4 == 2){
                if(j == 0){
                    cout << "#";
                }
                else{
                    cout << ".";
                }
            }
            else{
                cout << "#";
            }
        }

    }

    return 0;
}
